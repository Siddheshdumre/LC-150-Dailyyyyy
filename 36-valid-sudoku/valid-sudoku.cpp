class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        bool rows[9][9];
        bool columns[9][9];
        bool boxes [9][9];
        for(int i = 0; i<9; i++){
            for(int j = 0; j<9;  j++){
               if(board[i][j] != '.'){
                int num = board[i][j] - '1';
                int boxIndex = (i / 3) * 3 + (j / 3);
                if (rows[i][num] || columns[j][num] || boxes[boxIndex][num]){
                    return false;
                }
                rows[i][num] = columns[j][num] = boxes[boxIndex][num] = true;

               } 

            }
        }
        return true;
        
    }
};