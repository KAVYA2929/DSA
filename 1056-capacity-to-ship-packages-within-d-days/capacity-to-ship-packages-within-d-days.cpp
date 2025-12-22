class Solution {
public:
   int func(vector<int>&arr,int cap){
    int load = 0;
    int days = 1;
    for(int i=0;i<arr.size();i++){
        if(load+arr[i]<=cap){
            load = load + arr[i];
        }
        else{
            days = days + 1;
            load = arr[i];
        }
    }
        return days;
    
   }
    int shipWithinDays(vector<int>& weights, int days){
        int n = weights.size();
        int low = *max_element(weights.begin(),weights.end());
        int high = accumulate(weights.begin(),weights.end(),0);
        while(low<=high){
            int mid = (low + high)/2;
            int totaldays = func(weights , mid);
            if(totaldays<=days){
                high = mid - 1;
                
            }
            else{
                low = mid + 1;
            }
        }
        return low;
        
    }
   
};