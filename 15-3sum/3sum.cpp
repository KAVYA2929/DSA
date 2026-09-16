class Solution {
public:
    vector<vector<int>>result;
    void solve(vector<int>& nums,int i,int j, int target){

        while(i<j){
            if(nums[i] + nums[j] < target){
                i++;
            }
            else if( nums[i] + nums[j] > target){
                j--;
            }
            else{
                while( i < j && nums[i] == nums[i+1]) i++;
                while(i < j && nums[j] == nums[j-1]) j--;

                result.push_back({nums[i],nums[j],-target});
                i++;
                j--;
            }
        }
    }
    
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n =  nums.size();
        sort(nums.begin(),nums.end());

        for(int i = 0;i<=n-3;i++){

            if(i > 0 && nums[i] == nums[i-1]){
                continue;
            }

            int n1 = nums[i];
            int target = -n1;


            solve(nums,i+1,n - 1, target);

        }
        return result;
        
    }
};