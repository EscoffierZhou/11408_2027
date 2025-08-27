// 55ms 45.03MB 95.75% 吊
// 排序 + 线性扫描，并借助了 C++20 的新特性 ranges::sort 和 erase_if 来让代码变得异常简洁。
// 排序后，一个父文件夹必然会出现在其所有子文件夹的前面。例如，/a 会排在 /a/b 和 /a/c 的前面。
class Solution {
public:
    vector<string> removeSubfolders(vector<string>& folder) {
        // 1. 排序
        // std::sort(folder.begin(), folder.end()); // C++11
        // ["/a/b", "/a", "/c/d", "/c"] -> ["/a", "/a/b", "/c", "/c/d"]
        ranges::sort(folder);

        // 2. 有条件地擦除元素
        // erase_if(C++20):它会遍历容器中的每一个元素，并对每个元素执行一个动作(lambda函数)

        // [pre = "."s]：这是 C++14 引入的初始化捕获。
        // 它在 lambda 内部创建了一个名为 pre 的 std::string 变量，并初始化为 .。
        // 这个 pre 变量在整个 erase_if 的调用过程中都存在，用于记录上一个未被删除的文件夹路径。
        // . 是一个安全的初始值，因为它不会是任何有效绝对路径的前缀。

        // auto&& d：这是一个前向引用，它会逐个接收 folder 向量中的字符串元素。

        // mutable：这个关键字是必需的，因为它允许我们在 lambda 函数内部修改被捕获的变量 pre 的值
        erase_if(folder, [pre = "."s](auto&& d) mutable {
        // 3. 核心判断逻辑
            // 判断是否为子文件夹:
                // d.starts_with(pre): 这是 C++20 字符串的新方法，判断当前字符串 d 是否以 pre 开头。
                // d[pre.size()] == '/': 这是至关重要的一步。它检查 d 中紧跟在 pre 前缀之后的一个字符是否是 /。这可以防止把 /a/bc 误判为 /a/b 的子文件夹。
                // 如果这个部分为 true，则说明 d 是 pre 的子文件夹。lambda 立即返回 true，erase_if 会将 d 删除。由于短路求值，|| 后面的部分不会被执行。
            // 更新 pre:
                //pre = d: 将 pre 的值更新为当前的文件夹路径 d。这意味着 d 是一个新的、需要保留的父文件夹，它将作为后续路径的比较基准。
                 //, 0: 这是逗号运算符。它会先执行左边的赋值表达式 pre = d，然后返回右边的值 0。在布尔上下文中，0 被视为 false。
                 //所以，如果 d 不是子文件夹，此 lambda 会返回 false，erase_if 不会删除 d，同时 pre 已经被成功更新。
            return (d.starts_with(pre) && d[pre.size()] == '/') || (pre = d, 0);
        });

        // 4. 返回结果
        return folder;
    }
};