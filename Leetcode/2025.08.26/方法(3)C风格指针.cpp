// 0ms比第二种节约100KB
class Solution {
public:
    int areaOfMaxDiagonal(std::vector<std::vector<int>>& dimensions) {
        // 1. 处理边界情况：如果输入为空，直接返回 0
        if (dimensions.empty()) {
            return 0;
        }

        // 2. 创建一个指针，让它指向当前找到的“最佳”矩形。
        //    我们先假设第一个矩形是最佳的。
        //    dimensions.data() 返回一个指向 vector 底层数组的原始指针。
        //    它的类型是 std::vector<int>*
        const std::vector<int>* p_max_rect = dimensions.data();

        // 3. 使用指针进行循环遍历
        //    - 起始指针：从第二个元素开始比较 (dimensions.data() + 1)
        //    - 结束条件：当指针到达数组末尾之后的位置时停止
        //    - 每次循环：指针向前移动一个元素 (p_current++)
        const std::vector<int>* p_end = dimensions.data() + dimensions.size();
        for (const std::vector<int>* p_current = dimensions.data() + 1; p_current != p_end; ++p_current) {

            // 4. 解引用指针以获取数据并进行比较
            //    p_current 是指针, *p_current 是它指向的 std::vector<int> 对象

            // 计算当前指针指向的矩形的对角线平方
            long long current_diag_sq = (long long)(*p_current)[0] * (*p_current)[0] +
                                        (long long)(*p_current)[1] * (*p_current)[1];

            // 计算当前已记录的最大对角线矩形的对角线平方
            long long max_diag_sq = (long long)(*p_max_rect)[0] * (*p_max_rect)[0] +
                                    (long long)(*p_max_rect)[1] * (*p_max_rect)[1];

            if (current_diag_sq > max_diag_sq) {
                // 如果找到了更长的对角线，就更新指针，让它指向当前矩形
                p_max_rect = p_current;
            }
            else if (current_diag_sq == max_diag_sq) {
                // 如果对角线一样长，比较面积
                int current_area = (*p_current)[0] * (*p_current)[1];
                int max_area = (*p_max_rect)[0] * (*p_max_rect)[1];
                if (current_area > max_area) {
                    // 如果当前面积更大，同样更新指针
                    p_max_rect = p_current;
                }
            }
        }

        // 5. 循环结束后, p_max_rect 指向了最终符合条件的矩形
        //    解引用该指针，计算其面积并返回
        return (*p_max_rect)[0] * (*p_max_rect)[1];
    }
};