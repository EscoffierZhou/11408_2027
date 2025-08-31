class Solution {
public:
    // 如果遍历结束之后没有出现计数大于 1 的情况，则符合有效的数独的条件，返回 true。
    bool isValidSudoku(vector<vector<char>>& board) {
        int rows[9][9];
        int columns[9][9];
        int subboxes[3][3][9];

        memset(rows,0,sizeof(rows));        // 记录行数
        memset(columns,0,sizeof(columns));  // 记录列数
        memset(subboxes,0,sizeof(subboxes));// 记录小九宫格的数字出现次数
        // 小九宫格的行数和列数分别是 i/3,j/3(下取整)
        // 所以:subboxes[i/3][j/3][index]表示每个元素出现的次数

        // 国际象棋的行列是9*9,每个小九宫格就是3*3
        for (int i = 0; i < 9; i++) {
            for (int j = 0; j < 9; j++) {
                char c = board[i][j];
                // 如果填入的是数字n,则将
                // rows[i][n−1]、columns[j][n−1] 和 subboxes[i/3][j/3][index]各加 1
                if (c != '.') {
                    // 这里直接使用当前元素作为index
                    int index = c - '0' - 1;
                    rows[i][index]++;
                    columns[j][index]++;
                    subboxes[i / 3][j / 3][index]++;
                    if (rows[i][index] > 1 || columns[j][index] > 1 || subboxes[i / 3][j / 3][index] > 1) {
                        return false;
                    }
                }
            }
        }
        return true;
    }
};