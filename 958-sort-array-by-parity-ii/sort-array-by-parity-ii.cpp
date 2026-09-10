class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        int n = nums.size();
        vector<int>temp(n);
        int even = 0;
        int odd = 1;
        for(int i = 0;i<n;i++){
            if(nums[i] % 2 == 0){
                temp[even] = nums[i];
                even += 2;

            }else{
                temp[odd]  = nums[i];
                odd += 2;
            }
        }
        return temp;
    }
};