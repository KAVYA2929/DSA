class Solution {
public:
    bool possible(vector<int>& arr, int day,int b, int r) {
    int n = arr.size();
        int count = 0;
        int noofbookays = 0;
        for(int i =0;i<n;i++){
            if(arr[i]<=day){
                count++;
            }
            else{
                noofbookays += (count/r);
                count = 0;

            }

        }
        noofbookays += (count/r);
        if (noofbookays>=b) return true;
        else{
            return false;
        }
    }
    int minDays(vector<int>& bloomDay,int m, int k) {
        int n = bloomDay.size();
        long long val = m * 1LL * k * 1LL;
        if(n<val) return -1;

        int mini = INT_MAX;
        int maxi = INT_MIN;
        for(int i = 0;i<n;i++){
            mini = min(mini,bloomDay[i]);
            maxi = max(maxi,bloomDay[i]);
        }
        int low = mini;
        int high = maxi;
        while(low<=high){
            int mid = (low + high) / 2;
            if(possible(bloomDay,mid,m,k)){
                high = mid - 1;
            }
            else{
                low = mid + 1;
            }
        }
        return low;

        
        
    }
};