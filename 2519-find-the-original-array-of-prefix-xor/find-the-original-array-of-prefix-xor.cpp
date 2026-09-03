class Solution {
public:
    vector<int> findArray(vector<int>& pref) {
        int n = pref.size();
        vector<int>arr(n);
        int i = 1;
        arr[0] = pref[0];
        while(i<n){
            arr[i] = pref[i] ^ pref[i-1];
            i++; 
        }
        return arr;
        
    }
};