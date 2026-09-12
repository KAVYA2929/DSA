class Solution {
public:
    int findRadius(vector<int>& houses, vector<int>& heaters) {

        int n = houses.size();
        sort(heaters.begin() , heaters.end());
        int ans = 0;

        for(int i = 0;i<n;i++){

            int distance  = INT_MAX;

            auto it = lower_bound(heaters.begin(),heaters.end(),houses[i]);

            if(it != heaters.end()){
                 int nyi = *it - houses[i];
                 distance  = min(distance , nyi);
            }
            if(it != heaters.begin()){
                int nyi1 = houses[i] - *(it - 1);
                distance = min(distance , nyi1);
            }
            ans = max(ans , distance);

        }
        return ans;
        
    }
};