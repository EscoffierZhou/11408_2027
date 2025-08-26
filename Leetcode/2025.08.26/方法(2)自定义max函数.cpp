// 0ms,内存更省
class Solution {
public:
    int areaOfMaxDiagonal(std::vector<std::vector<int>>& dimensions) {
        // 处理边界情况：如果输入为空，则没有矩形，面积为0。
        if (dimensions.empty()) {
            return 0;
        }

        // 使用 std::max_element 寻找“最大”的矩形。
        // 它返回一个指向最大元素的迭代器。
        auto max_element_iterator = std::max_element(
                dimensions.begin(),
                dimensions.end(),
                [](const std::vector<int>& rect_a, const std::vector<int>& rect_b) {
                    // 计算两个矩形对角线长度的平方
                    long long diag_a_sq = (long long)rect_a[0] * rect_a[0] + (long long)rect_a[1] * rect_a[1];
                    long long diag_b_sq = (long long)rect_b[0] * rect_b[0] + (long long)rect_b[1] * rect_b[1];

                    // 比较规则1：如果对角线长度不同，对角线长的那个“更大”
                    if (diag_a_sq != diag_b_sq) {
                        // max_element 需要一个“小于”比较。
                        // 如果 a 的对角线小于 b，则返回 true。
                        return diag_a_sq < diag_b_sq;
                    }

                    // 比较规则2：如果对角线长度相同，面积大的那个“更大”
                    // 所以，如果 a 的面积小于 b，则返回 true。
                    return (long long)rect_a[0] * rect_a[1] < (long long)rect_b[0] * rect_b[1];
                }
        );

        // max_element_iterator 现在指向符合条件的那个矩形 vector<int>
        // 我们需要解引用 (*) 来获取它，然后计算面积。
        return (*max_element_iterator)[0] * (*max_element_iterator)[1];
    }
};