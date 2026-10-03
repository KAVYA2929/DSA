class Solution {
public:
    int n;
    int t[101][101];
    int solve(vector<vector<int>>& matrix,int row , int col){
        if(row == n - 1){
            return matrix[row][col];
        }
        if(t[row][col] != INT_MAX){
            return t[row][col];
        }

        int sum = matrix[row][col];
        int minsum = INT_MAX;

        if(row + 1<n && col - 1 >= 0){
            minsum = min(minsum , sum + solve(matrix,row+1,col-1));
        }

        if(row + 1<n){
            minsum = min(minsum ,sum + solve(matrix,row+1,col));
        }

        if(row + 1<n && col + 1 < n){
            minsum = min(minsum ,sum + solve(matrix,row+1,col+1));
        }

        return t[row][col] = minsum;

    }
    int minFallingPathSum(vector<vector<int>>& matrix) {

        n = matrix.size();

        for(int i = 0 ;i<101;i++){
            for(int j = 0;j<101;j++){
                t[i][j] = INT_MAX;
            }
        }

        int row = 0;
        int result = INT_MAX;
        for(int col = 0;col<n;col++){
            result = min(result , solve(matrix,row , col));
        }
        return result;
        
    }
};