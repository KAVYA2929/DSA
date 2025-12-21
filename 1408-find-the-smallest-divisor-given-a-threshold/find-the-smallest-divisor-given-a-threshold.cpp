class Solution {
public:
   
    int sumbyD(vector<int>&arr,int div){
        long long sum = 0;
        int n = arr.size();
        for(int i=0;i<n;i++){
            sum = sum + (arr[i] + div - 1) / div;

        }
        return sum;
    }
    int smallestDivisor(vector<int>& nums, int threshold) {
        int n = nums.size();
        int low = 1;
        int high = *max_element(nums.begin(),nums.end());
        while(low<=high){
            int mid=(low+high)/2;
            if(sumbyD(nums,mid)<=threshold){
                high = mid - 1;
            }
            else{
                low = mid + 1;
            }
        }
        return low;
        
    }
};