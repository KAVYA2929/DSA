class Solution {
public:
   int t[101][101];
   int solve(int i,int j ,int m , int n){
    if(i == n -1 && j == m -1){
        return 1;
    }
    if(i<0 || i > n || j < 0 || j > m){
        return 0;
    }
    if(t[i][j] != -1){
        return t[i][j];
    }
    int right = solve(i,j+1,m ,n);
    int down = solve(i+1,j,m,n);

    return t[i][j] = right + down;


   }
    int uniquePaths(int m, int n) {
        if(m == 0 || n == 0){
            return 0;
        }
        memset(t,-1,sizeof(t));
        return solve(0,0,m,n);
    }
};