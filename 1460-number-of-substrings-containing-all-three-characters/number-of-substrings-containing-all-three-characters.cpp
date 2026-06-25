class Solution {
public:
    int numberOfSubstrings(string s) {
    int n = s.length();
    int i =0;
    int j =0;
    int hash[3] = {0};
    int result = 0;
    while(j<n){
        char ch = s[j];
        hash[s[j]-'a']++;
        while(hash[0] && hash[1] && hash[2] >0){
            result = result + (n-j);
            hash[s[i]-'a']--;
            i++;
            
        }
        j++;
    }
    return result;
        
    }
};