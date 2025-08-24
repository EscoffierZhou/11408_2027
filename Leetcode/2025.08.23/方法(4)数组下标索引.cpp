// 方法:4:数组下标索引(桶排序) O(N+K)理论上比前面的O(N+KlogK)都要快
// 并不是传统的数量比较,而是创建桶,将频率相同的扔到一起
class Solution {
public:
    string frequencySort(string s) {
        // 阶段1:计数
        unordered_map<char, int> ump;
        for (const auto &c : s) {
            ++ump[c];
        }
        // 阶段2:创建桶
        vector<string> vec(s.size() + 1);

        string res;
        for (const auto &m : ump) {
            vec[m.second].append(m.second, m.first);
            // string& append(size_type count, CharT ch);
            // count是追加的字符数量,ch是追加的字符
        }
        // 阶段3:通过频率桶来倒序输出
        for (int i = s.size(); i > 0; --i) {
            if (!vec[i].empty()) {
                res.append(vec[i]);
            }
        }
        return res;
    }
};
