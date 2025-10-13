// 直接模拟耗时0ms,注意const auto&的用法
class Solution {
public:
    int areaOfMaxDiagonal(std::vector<std::vector<int>>& dimensions) {
        long long max_diagonal = 0; // 使用 long long 防止整数溢出
        int max_area = 0;

        for (const auto& dim : dimensions) {
            int length = dim[0];
            int width = dim[1];

            // 计算对角线长度的平方
            long long current = (long long)length * length + (long long)width * width;

            // 如果找到更长的对角线
            if (current > max_diagonal) {
                max_diagonal = current
                max_area = length * width;
            }
                // 如果对角线长度相等，则比较面积
            else if (current == max_diagonal) {
                max_area = std::max(max_area, length * width);
            }
        }

        return max_area;
    }
};