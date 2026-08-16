class Solution {
public:
    long long countSubstrings(string s, char c) {
        int n = s.length();
        long long cnt = 0;
        for(int i =0;i<n;i++){
            if(s[i] == c){
                cnt++;
            }
        }
        return cnt * (cnt + 1) / 2;
        
    }
};