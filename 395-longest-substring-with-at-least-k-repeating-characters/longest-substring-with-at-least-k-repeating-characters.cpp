class Solution {
public:
    int longestSubstring(string s, int k) {

        int n = s.length();
        int maxi = 0;

        for(int i = 0;i<n;i++){

            vector<int>mp(26,0);

            for(int j = i;j<n;j++){

                mp[s[j]-'a']++;

                bool valid = true;

                for(int x =0;x<26;x++){
                    if (mp[x] > 0 && mp[x] < k){
                        valid = false;
                        break;

                    }
                }
                if(valid){
                maxi = max(maxi , j -i + 1);
                }
             }
            
        }
        return maxi;
        
    }
};