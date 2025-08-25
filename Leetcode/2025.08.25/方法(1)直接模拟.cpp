// 主要思路:按照路径模拟
// 从0行开始,如果是偶数,则↗;如果是奇数,则↙
// 对角线关系:不同对角线上的坐标和都是一个常数(也就是行长度k)
//
class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& mat) {
        int m = mat.size(),n = mat[0].size(); // 获取列m和行n
        vector<int>ans;
        ans.reserve(m * n); // std::vector自动管理内存,性能好一点

        // 通过k控制对角线位置
        for(int k = 0;k < m + n - 1;k++)
        {
            // 对于矩阵元素mat[i][j],从0开始计数,用size算会越界
            // 最小有效列索引:行不能越界(i = k - j <= m - 1)(列自动不为负)
            int min_j = max(k - m + 1, 0);
            // 最大有效列索引:列不能越界(行自动不为负)
            int max_j = min(k, n - 1);
            if(k % 2 ==0)
            {
                // 因为
                for (int j = min_j; j <= max_j; j++)
                {
                    ans.push_back(mat[k - j][j]);
                }
            }else{
                for (int j = max_j; j >= min_j; j--)
                {
                    ans.push_back(mat[k - j][j]);
                }
            }
        }
        return ans;
    }
};