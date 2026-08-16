class Solution {
public:
    int beautifulSubstrings(string s, int k) {
        int n = s.length();
        int cnt = 0;
        for(int i =0;i<n;i++){
            int vowel = 0;
            int constant = 0;
            for(int j =i;j<n;j++){
                if(string("aeiou").find(s[j]) != string::npos){
                    vowel++;
                }else{
                    constant++;
                }
                if(vowel == constant && (vowel * constant) % k == 0){
                    cnt++;
                }

            }
        
        }
        return cnt;
        
    }
};