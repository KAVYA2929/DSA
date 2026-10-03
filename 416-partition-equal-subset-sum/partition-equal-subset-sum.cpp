class Solution {
public:
    int n;
    int t[201][20001];
    bool solve(vector<int>& nums,int i ,int x){
        if(x == 0){
            return true;
        }
        if(i >= nums.size()){
            return false;
        }
        if(t[i][x] != -1){
            return t[i][x];
        }
        bool take = false;
        if(nums[i] <= x){
             take = solve(nums,i+1,x-nums[i]);
           
        }
        bool skip = solve(nums,i+1,x);
        return t[i][x] = take || skip;
    }
    bool canPartition(vector<int>& nums) {
        n = nums.size();
        int sum = 0;
        memset(t,-1,sizeof(t));
        for(int i =0;i<n;i++){
            sum += nums[i];
        }
        if(sum % 2 != 0){
            return false;
        }
        int x = sum / 2;
        return solve(nums,0,x);
    }
};