#include <vector>
#include <numeric>
#include <algorithm> // for std::max

// 检查编译器是否定义了 __AVX2__ 宏。
// 这个宏只有在 C++ 编译器被告知要为 AVX2 编译时（例如使用 -mavx2）才会被定义。
#if defined(__AVX2__)
#include <immintrin.h> // 仅在启用 AVX2 时才包含头文件

// -----------------------------------------------------------------
// 这是你的超高性能 AVX2 内核
// -----------------------------------------------------------------
int compute_kernel(const int* __restrict__ lengths, const int* __restrict__ widths, const size_t n) {
    // ... (之前那段完整的 AVX2 代码放在这里) ...
    // ... (为了简洁，这里省略，请直接使用上一版回复中的 AVX2 内核代码) ...
    if (n == 0) return 0;
    
    __m256i v_max_diag_sq = _mm256_set1_epi32(-1);
    __m256i v_max_area = _mm256_set1_epi32(-1);
    const size_t simd_width = 8;
    size_t i = 0;
    for (; i + simd_width <= n; i += simd_width) {
        __m256i v_len = _mm256_loadu_si256((__m256i*)(lengths + i));
        __m256i v_wid = _mm256_loadu_si256((__m256i*)(widths + i));
        __m256i v_area = _mm256_mullo_epi32(v_len, v_wid);
        __m256i v_len_sq = _mm256_mullo_epi32(v_len, v_len);
        __m256i v_wid_sq = _mm256_mullo_epi32(v_wid, v_wid);
        __m256i v_diag_sq = _mm256_add_epi32(v_len_sq, v_wid_sq);
        __m256i diag_gt_mask = _mm256_cmpgt_epi32(v_diag_sq, v_max_diag_sq);
        __m256i diag_eq_mask = _mm256_cmpeq_epi32(v_diag_sq, v_max_diag_sq);
        __m256i area_gt_mask = _mm256_cmpgt_epi32(v_area, v_max_area);
        __m256i tie_break_mask = _mm256_and_si256(diag_eq_mask, area_gt_mask);
        __m256i final_update_mask = _mm256_or_si256(diag_gt_mask, tie_break_mask);
        v_max_diag_sq = _mm256_blendv_epi8(v_max_diag_sq, v_diag_sq, final_update_mask);
        v_max_area    = _mm256_blendv_epi8(v_max_area, v_area, final_update_mask);
    }
    int temp_areas[8];
    long long temp_diags_64[8]; // Use 64-bit for extraction to be safe
    int temp_diags_32[8];
    _mm256_storeu_si256((__m256i*)temp_areas, v_max_area);
    _mm256_storeu_si256((__m256i*)temp_diags_32, v_max_diag_sq);
    for(int j=0; j<8; ++j) temp_diags_64[j] = (unsigned int)temp_diags_32[j]; // Handle potential overflow if diag_sq > 2^31

    long long max_diag_sq = -1;
    int max_area = -1;
    for(int j=0; j<8; ++j) {
        if (temp_diags_64[j] > max_diag_sq) {
            max_diag_sq = temp_diags_64[j];
            max_area = temp_areas[j];
        } else if (temp_diags_64[j] == max_diag_sq) {
            max_area = std::max(max_area, temp_areas[j]);
        }
    }
    for (; i < n; ++i) {
        long long current_diag_sq = (long long)lengths[i] * lengths[i] + (long long)widths[i] * widths[i];
        if (current_diag_sq > max_diag_sq) {
            max_diag_sq = current_diag_sq;
            max_area = lengths[i] * widths[i];
        } else if (current_diag_sq == max_diag_sq) {
            max_area = std::max(max_area, lengths[i] * widths[i]);
        }
    }
    return max_area;
}

#else

// -----------------------------------------------------------------
// 这是通用的后备（Fallback）内核，在任何机器上都能运行
// -----------------------------------------------------------------
int compute_kernel(const int* lengths, const int* widths, const size_t n) {
    if (n == 0) return 0;

    long long max_diagonal_sq = -1;
    int max_area = 0;

    for (size_t i = 0; i < n; ++i) {
        long long current_diagonal_sq = (long long)lengths[i] * lengths[i] + (long long)widths[i] * widths[i];

        if (current_diagonal_sq > max_diagonal_sq) {
            max_diagonal_sq = current_diagonal_sq;
            max_area = lengths[i] * widths[i];
        }
        else if (current_diagonal_sq == max_diagonal_sq) {
            max_area = std::max(max_area, lengths[i] * widths[i]);
        }
    }
    return max_area;
}

#endif // End of conditional compilation block for __AVX2__

class Solution {
public:
    int areaOfMaxDiagonal(std::vector<std::vector<int>>& dimensions) {
        const size_t n = dimensions.size();
        if (n == 0) return 0;

        // 数据转换部分保持不变
        std::vector<int> lengths(n);
        std::vector<int> widths(n);
        for (size_t i = 0; i < n; ++i) {
            lengths[i] = dimensions[i][0];
            widths[i] = dimensions[i][1];
        }

        // 无论哪种情况，都调用 compute_kernel
        // 编译器会根据编译选项自动链接到正确的版本
        return compute_kernel(lengths.data(), widths.data(), n);
    }
};