// 效果最佳,耗时0ms,空间复杂度O(1)
// 基本思路:双指针
class SolutionSlidingWindow {
public:
    int longestSubarray(std::vector<int>& nums) {
        // 阶段1:初始化左右指针,以及cnt,窗口大小为 right - left + 1
        int left = 0;
        int zero_count = 0;
        int max_len = 0;
        // 阶段2:设置右指针遍历,左指针收缩
        for (int right = 0; right < nums.size(); ++right) {
            if (nums[right] == 0) {
                zero_count++;
            }
            // 当窗口内的 0 超过一个时，收缩左边界(没有1,不满足条件)
            while (zero_count > 1) {
                if (nums[left] == 0) {
                    zero_count--;
                }
                left++;
            }
            // 特殊情况:窗口内都是1的长度为 (right - left + 1) - 1 = right - left
            max_len = std::max(max_len, right - left);
        }
        return max_len;
    }
};