class Solution {
public:
    int t[301][5001];
    int solve(vector<int>& coins,int i , int amount){

        int n = coins.size();

        if(amount == 0){
            return 1;
        }

        if(i >= n){
            return 0;
        }

        if(t[i][amount] != -1){
            return t[i][amount];

        }

        if(amount < coins[i]){
            return t[i][amount] = solve(coins,i+1,amount);
        }

        int take = solve(coins,i,amount - coins[i]);
        int skip = solve(coins,i+1,amount);

        return t[i][amount] = take + skip;
        

    }
    int change(int amount, vector<int>& coins) {
        int n = coins.size();
        memset(t,-1,sizeof(t));

        return solve(coins,0,amount);
        
    }
};