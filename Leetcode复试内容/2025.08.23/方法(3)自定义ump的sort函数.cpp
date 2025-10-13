// 方法3:自定义ump的sort函数(耗时111ms)
class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char, int> ump;
        for (const auto &c : s) {
            ++ump[c];
        }
        sort(s.begin(), s.end(), [&](char &a, char &b) { return ump[a] > ump[b] || (ump[a] == ump[b] && a < b); });
        return s;
    }
};