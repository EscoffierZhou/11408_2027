//如果该位置是一个空白格，那么我们将其加入一个用来存储空白格位置的列表中，方便后续的递归操作；

//如果该位置是一个数字 x，那么我们需要将 line[i][x−1]，column[j][x−1] 以及 block[⌊i/3⌋][⌊j/3⌋][x−1] 均置为 True

// 当我们结束了遍历过程之后，就可以开始递归枚举。当递归到第 i 行第 j 列的位置时，我们枚举填入的数字 x。根据题目的要求，数字 x 不能和当前行、列、九宫格中已经填入的数字相同，因此 line[i][x−1]，column[j][x−1] 以及 block[⌊i/3⌋][⌊j/3⌋][x−1] 必须均为 False。
//
// 当我们填入了数字 x 之后，我们要将上述的三个值都置为 True，并且继续对下一个空白格位置进行递归。在回溯到当前递归层时，我们还要将上述的三个值重新置为 False。

class Solution {
private:
    bool line[9][9];
    bool column[9][9];
    bool block[3][3][9];
    bool valid;
    vector<pair<int, int>> spaces;

public:
    void dfs(vector<vector<char>>& board, int pos) {
        if (pos == spaces.size()) {
            valid = true;
            return;
        }

        auto [i, j] = spaces[pos];
        for (int digit = 0; digit < 9 && !valid; ++digit) {
            if (!line[i][digit] && !column[j][digit] && !block[i / 3][j / 3][digit]) {
                line[i][digit] = column[j][digit] = block[i / 3][j / 3][digit] = true;
                board[i][j] = digit + '0' + 1;
                dfs(board, pos + 1);
                line[i][digit] = column[j][digit] = block[i / 3][j / 3][digit] = false;
            }
        }
    }

    void solveSudoku(vector<vector<char>>& board) {
        memset(line, false, sizeof(line));
        memset(column, false, sizeof(column));
        memset(block, false, sizeof(block));
        valid = false;

        for (int i = 0; i < 9; ++i) {
            for (int j = 0; j < 9; ++j) {
                if (board[i][j] == '.') {
                    spaces.emplace_back(i, j);
                }
                else {
                    int digit = board[i][j] - '0' - 1;
                    line[i][digit] = column[j][digit] = block[i / 3][j / 3][digit] = true;
                }
            }
        }

        dfs(board, 0);
    }
};
