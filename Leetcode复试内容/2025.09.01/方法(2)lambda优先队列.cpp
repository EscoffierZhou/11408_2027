#include <iostream>
#include <vector>
#include <queue>
#include <utility> // 包含 std::pair

class Solution {
public:
    double maxAverageRatio(std::vector<std::vector<int>>& classes, int extraStudents) {
        // 定义一个 Lambda 表达式作为优先队列的比较函数
        // std::pair<int, int> 类型，分别代表 {pass, total}
        // 比较逻辑是：如果给 a 班和 b 班各增加一个学生，哪个班的通过率增益更大
        // 增益(pass, total) = (pass + 1)/(total + 1) - pass/total = (total - pass) / (total * (total + 1))
        // 为了避免浮点数计算，我们使用交叉相乘来比较增益的大小

        auto cmp = [](const std::pair<int, int>& a, const std::pair<int, int>& b) {
            long long total_a = a.second;
            long long pass_a = a.first;
            long long total_b = b.second;
            long long pass_b = b.first;

            // 比较 a 和 b 的增益，增益大的优先级高（小顶堆的比较函数返回 true 表示 a 的优先级更低）
            // 原始逻辑: (oth.total + 1) * oth.total * (total - pass) < (total + 1) * total * (oth.total - oth.pass)
            // 对应到 lambda (a,b): (b.total + 1) * b.total * (a.total - a.pass) < (a.total + 1) * a.total * (b.total - b.pass)
            return (total_b + 1) * total_b * (total_a - pass_a) < (total_a + 1) * total_a * (total_b - pass_b);
        };

        // 使用 decltype(cmp) 来指定比较器的类型
        std::priority_queue<std::pair<int, int>, std::vector<std::pair<int, int>>, decltype(cmp)> q(cmp);

        // 将所有班级数据放入优先队列
        for (const auto& c : classes) {
            q.push({c[0], c[1]});
        }

        // 分配额外的学生
        for (int i = 0; i < extraStudents; ++i) {
            // 使用 C++17 结构化绑定，代码更清晰。
            // 如果使用 C++14，则应写成:
            // std::pair<int, int> top = q.top();
            // int pass = top.first;
            // int total = top.second;
            auto [pass, total] = q.top();
            q.pop();
            q.push({pass + 1, total + 1});
        }

        double total_ratio = 0.0;
        // 计算最终的总通过率
        while (!q.empty()) {
            auto [pass, total] = q.top();
            q.pop();
            total_ratio += static_cast<double>(pass) / total;
        }

        return total_ratio / classes.size();
    }
};