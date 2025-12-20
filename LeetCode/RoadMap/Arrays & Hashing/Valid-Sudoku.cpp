class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {

        for (int row = 0; row < 9; row++) {

            unordered_set<char> rows;
            for (int col = 0; col < 9; col++) {

                char value = board[row][col];
                if (value != '.') {

                    if (rows.count(value)) return false;
                    rows.insert(value);
                }
            }
        }

        for (int col = 0; col < 9; col++) {

            unordered_set<char> cols;
            for (int row = 0; row < 9; row++) {

                char value = board[row][col];
                if (value != '.') {

                    if (cols.count(value)) return false;
                    cols.insert(value);
                }
            }
        }
        
        for (int startRow = 0; startRow < 9; startRow += 3) {

            for (int startCol = 0; startCol < 9; startCol += 3) {

                unordered_set<char> box;
                for (int row = 0; row < 3; row++) {

                    for (int col = 0; col < 3; col++) {

                        char value = board[startRow + row][startCol + col];
                        if (value != '.') {

                            if (box.count(value)) return false;
                            box.insert(value);
                        }
                    }
                }
            }
        }

        return true;
    }
};