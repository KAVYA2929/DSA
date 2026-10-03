class Solution {
public:
    int n,m;
    int t[71][71][71];
    int solve(vector<vector<int>>& grid,int row , int col1,int col2){

        if(row >= m){
            return 0;
        }
        if(t[row][col1][col2] != -1){
            return t[row][col1][col2];
        }

        int cherry = grid[row][col1];
        if(col1 != col2){
            cherry += grid[row][col2];

        }
        int ans = 0;
        for(int i = -1;i<=1;i++){
            for(int j = -1;j<=1;j++){
              int row1 = row + 1;
              int newc1 =  col1 + i;
              int newc2 = col2 + j;
              if(newc1 < 0 || newc1 >= n ||newc2 < 0 || newc2 >= n){
                  continue;
                }
              ans = max(ans,solve(grid,row1,newc1,newc2));



            }
        }
        return t[row][col1][col2] = cherry + ans;
    }
    int cherryPickup(vector<vector<int>>& grid) {
        m = grid.size();
        n = grid[0].size();
        memset(t,-1,sizeof(t));
        return solve(grid,0,0 ,n - 1);
        
    }
};