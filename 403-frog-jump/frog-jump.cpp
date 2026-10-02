class Solution {
public:
    int n;
    int t[2001][2001];
    unordered_map<int , int>mp;

    int solve(vector<int>& stones,int curr_idx,int previousjump){
        if(curr_idx == n - 1){
            return true;
        }
        if(t[curr_idx][previousjump] != -1){
            return t[curr_idx][previousjump];
        }
        bool result = false;
        for(int nextjump = previousjump - 1;nextjump <= previousjump + 1;nextjump++){

            if(nextjump > 0){
                int nextstone = stones[curr_idx] + nextjump;
                 if(mp.find(nextstone) != mp.end()){
                     result =  result || solve(stones,mp[nextstone],nextjump);
                 }
            }

        }
        return t[curr_idx][previousjump] = result;

    }

    bool canCross(vector<int>& stones) {
        n = stones.size();
        memset(t,-1,sizeof(t));

        if(stones[1] != 1){
            return false;
        }
        for(int i =0;i<n;i++){
            mp[stones[i]] = i;
        }
        return solve(stones, 0,0);
        
    }
};