class Solution {
public:
    int n , m;
    int t[301][301];
    
    int solve(int i , int j,vector<vector<int>>& matrix){
        if(i >= n || j >= m){
            return 0;
        }
        if(matrix[i][j] == 0){
            return 0;
        }
        if(t[i][j] != -1){
            return t[i][j];
        }
        int right = solve(i,j+1,matrix);
        int diagonal = solve(i+1,j+1,matrix);
        int below = solve(i+1,j,matrix);

        return t[i][j] =  1 + min({right , diagonal , below});

    }
    int countSquares(vector<vector<int>>& matrix) {
        n = matrix.size();
        m = matrix[0].size();
        int result = 0;
        memset(t,-1,sizeof(t));

        for(int i =0;i<n;i++){
            for(int j = 0;j<m;j++){
                result += solve(i,j,matrix);


            }
        }
        return result;
        
    }
};