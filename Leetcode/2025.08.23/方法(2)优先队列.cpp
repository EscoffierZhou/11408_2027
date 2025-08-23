// 方法2:使用优先队列(耗时s3ms)
class Solution {
public:
    string frequencySort(string s) {
        // 阶段1:计数
        unordered_map<char, int> ump;
        for (const auto &c : s) {
            ++ump[c];
        }
        // 阶段2:排序
        priority_queue<pair<int, char>> pq;
        for (const auto &m : ump) {
            pq.push({m.second, m.first}); // 列表初始化!!
            // 在这里原地创建了一个std::pair(int,char)的临时对象,传递给pq.push()方法
            // pq.push()方法使用原型:void push(value_type&& value); // 右值引用
            // 所以会导致每个元素插入的时候,都会维护堆结构
        }
        // 阶段3:构建答案(string类)
        string ret;
        while (!pq.empty()) {
            auto t = pq.top();
            pq.pop();
            ret.append(t.first, t.second);
        }
        return ret;
    }
};
