class Solution {
public:
     bool ispalindrome(string &s,int i ,int j) {
        while(i < j)
        {
            if(s[i] != s[j])
            {
                return false;
            }

            i++;
            j--;
        }

        return true;
    }

    string longestPalindrome(string s) {
        int n = s.length();
        int maxlength = 0;
        int startingpoint = 0;
        for(int i =0;i<n;i++){
            for(int j = i ;j<n;j++){
              if(ispalindrome(s,i,j) == true){
                if(maxlength < j - i + 1){
                    maxlength = j - i + 1;
                    startingpoint = i;
                }

              }

            }
        }
        return s.substr(startingpoint , maxlength);
        
    }
};