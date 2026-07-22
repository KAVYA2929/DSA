class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        long long xors = 0;
        for(int i =0;i<nums.size();i++){
            xors = xors ^ nums[i];
        }
        long long mask = xors & (-xors);
        int groupa =0;
        int groupb = 0;
        for(int i =0;i<nums.size();i++){
            if(mask & nums[i]){
                groupa = groupa^nums[i];
            }else{
                groupb = groupb^nums[i];
            }
        }
        return{groupa,groupb};
        
    }
};