class Solution {
public:
    bool isPalindrome(int x) {
        string ch = to_string(x);
        int n = ch.length();
        int left = 0;
        int right = n - 1;
       while(left<right){
        if(ch[left] != ch[right]){
            return false;
        }
        left++;
        right--;
       }
       return true;

        
    }
};