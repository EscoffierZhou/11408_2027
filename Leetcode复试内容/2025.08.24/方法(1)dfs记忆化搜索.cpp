#include<functional>
// 效果不理想,耗时127ms,时间复杂度空间复杂度都是O(N)
// 基本思路:递归(倒推思想)+记忆化=DP,看当前位置的数和上一个状态的关系(但是是站在上一个状态上)
// 如果当前位置是1,那么上一步的长度+1 = 这一步的长度          -> result = n
// 如果当前位置是0,并且上一步的delete为true了(也是0),则长度为0-> result = 0
// 如果当前位置是0,并且上一步的delete为False(不知道是多少)    -> result = dfs(i-1,true) // 知道这一步知道是0的
class Solution {
public:
    int longestSubarray(std::vector<int>& nums)
    {
        // 阶段1:初始化(数量n/答案ans/记忆化表格memo)
        int n = nums.size();
        if (n == 0)
        {
            return 0;
        }
        int ans = 0;
        // 记忆化表格，用于存储已经计算过的状态结果,初始化为 -1，表示尚未计算
        std::vector<std::vector<int>> memo(n, std::vector<int>(2, -1)); // 大小为n行2列
        std::function<int(int, bool)> dfs; // dfs函数原型(使用function)

        // 阶段2:记忆化搜索dfs
        // 使用 std::function 来定义一个可捕获外部变量的 lambda 函数
        // std::function<int(int, bool)> dfs = [&](int i, bool deleted) -> int { ... };
        // 解释:dfs是一个通过std::function为原型,列表化按引用传入所有外部变量,参数列表传入实参,返回值为int的函数
        dfs = [&](int i, bool deleted) -> int {
                    // 额外情况1：如果索引越界，返回 0
                    if (i < 0)
                    {
                        return 0;
                    }
                    // 额外情况2:如果当前状态已计算过，直接返回记忆化的结果
                    if (memo[i][deleted] != -1)
                    {
                        return memo[i][deleted];
                    }
                    // 计算情况
                    int result;
                    if (nums[i] == 1)
                    {
                        // 如果当前数字是 1，则长度等于上一个状态的长度加 1
                        result = dfs(i - 1, deleted) + 1;
                    } else {
                        if (deleted)
                        {
                            // 如果之前已经删除过一个 0，再次遇到 0 则中断，当前子数组长度为 0
                            result = 0;
                        } else {
                            // 如果这是第一个遇到的 0，则“删除”它，然后继续向前计算
                            result = dfs(i - 1, true);
                        }
                    }
                    // 将计算结果存入记忆化表格
                    return memo[i][deleted] = result;
                };

        // 遍历每个位置，计算以该位置结尾的最长子数组长度，并更新最大值
        for (int i = 0; i < n; ++i) {
            ans = std::max(ans, dfs(i, false));
        }
        // 额外情况3：如果结果与数组长度相等，说明数组中全是 1。
        // 题目要求必须删除一个元素，所以结果需要减 1。
        return (ans == n) ? ans - 1 : ans;
    }
};