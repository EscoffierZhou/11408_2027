// 51ms 45.07MB 一般
#include <vector>
#include <string>
#include <algorithm> // for std::ranges::sort

class Solution {
public:
    std::vector<std::string> removeSubfolders(std::vector<std::string>& folder) {
        // 步骤 1: 排序，确保父文件夹在前，子文件夹在后。
        std::ranges::sort(folder);

        // 步骤 2: 创建一个独立的字符串变量来存储最后一个有效的文件夹。
        // 使用 std::string 会在赋值时创建数据的副本，从而避免了视图悬空的问题。
        std::string last_valid_folder = " "; // 使用一个不会成为任何路径前缀的初始值

        // 步骤 3: 使用 erase_if 遍历并移除子文件夹。
        std::erase_if(folder, [&](const std::string& current_folder) {

            // 步骤 4: 核心判断逻辑
            // 检查 current_folder 是否是 last_valid_folder 的一个严格子文件夹。
            // `starts_with` 检查前缀，`[...]=='/'` 确保目录边界正确。
            if (current_folder.starts_with(last_valid_folder) &&
                last_valid_folder.size() < current_folder.size() &&
                current_folder[last_valid_folder.size()] == '/') {

                // 如果是子文件夹，返回 true，erase_if 将会删除它。
                return true;

            } else {
                // 如果不是子文件夹，它就是一个新的根。
                // 我们更新 last_valid_folder 为当前文件夹的“副本”。
                last_valid_folder = current_folder;

                // 返回 false，表示保留这个元素。
                return false;
            }
        });

        // 步骤 5: 返回修改后只包含根文件夹的 vector。
        return folder;
    }
};