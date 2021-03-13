class Solution {
    bool solve;
    void generate(int i , int j,vector<vector<char>>& board,vector<int>rows[9],vector<int>cols[9],vector<int>square[9]){
        if(i==9){
            solve = true;
            return;
        }
            int new_i = i + (j+1)/9;
            int new_j = (j+1)%9;
            if(board[i][j]!='.'){
                generate(new_i,new_j,board,rows,cols,square);
            }
            else{
                for(int k=1;k<=9;k++){
                    int box_id = i/3 * 3 + j/3;
                    if((find(rows[i].begin(),rows[i].end(),k)==rows[i].end())&&(find(cols[j].begin(),cols[j].end(),k)==cols[j].end())&&(find(square[box_id].begin(),square[box_id].end(),k)==square[box_id].end())){
                        rows[i].push_back(k);
                        cols[j].push_back(k);
                        square[box_id].push_back(k);
                        board[i][j] = '0' + k;
                        generate(new_i,new_j,board,rows,cols,square);
                        if(!solve){
                            rows[i].pop_back();
                            cols[j].pop_back();
                            square[box_id].pop_back();
                        }
                        
                    }
                    
                }
            }
    }
public:
    void solveSudoku(vector<vector<char>>& board) {
        vector<int>rows[9];
        vector<int>cols[9];
        vector<int>square[9];
        for(int i = 0 ;i < 9;i++){
            for(int j = 0;j<9;j++){
                if(board[i][j]!='.'){
                    int num = (int)board[i][j] - 48;
                    rows[i].push_back(num);
                    cols[j].push_back(num);
                    int box_id = i/3 * 3 + j/3;
                    square[box_id].push_back(num);
                    
                }
            }
        }
        solve = false;
        generate(0,0,board,rows,cols,square);
    }
};