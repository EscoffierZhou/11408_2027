// 方法1:使用自定义sort函数(耗时0ms)
class Solution {
public:
    string frequencySort(string s) {
        // 阶段1:计数(使用快速查找,快速增加)
        unordered_map<char,int>ump;
        for(const auto &c:s)
        {
            ++ump[c]; // 自动处理,如果没有则添加键;有则增加对应的值
        }

        // 阶段2:排序(使用std的sort函数)
        vector<pair<char,int>>vec;
        for(const auto &m:ump)
        {
            vec.push_back(m);
        }

        // 阶段3:自定义sort
        sort(vec.begin(), vec.end(), [](const pair<char, int> &p1, const pair<char, int> &p2) { return p1.second > p2.second; });
        // []是lambda表达式的起始部分,称作捕获列表,在这里不需要从外部作用域捕获变量
        // 第一个括号则是lambda函数的参数列表,每次取出两个pair进行比较
        // p1和p2都是pair<char,int>类型,".first"是字符,".second"是出现的频率

        // 阶段4:调用sort函数构建答案
        string ret;
        for(const auto &v:vec)
        {
            ret += string(v.second,v.first);
        }
        return ret;
    }
};

/*
标准的 std::sort 函数原型：
    void sort(RandomIt first, RandomIt last, Compare comp);
    // 其中first和last是两个迭代器,定义了排序的范围
    // comp是比较函数,如果不提供则默认使用'<'符号进行排序
*/