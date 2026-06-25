class Solution {
public:
    int calculate(char ch){
        if(ch == 'I'){
            return 1;
        }
        else if(ch == 'V'){
            return 5;
        }
        else if(ch == 'X'){
            return 10;
        }
        else if(ch == 'L'){
            return 50;
        }
        else if(ch == 'C'){
            return 100;
        }
        else if(ch == 'D'){
            return 500;
        }
        else if(ch == 'M'){
            return 1000;
        }
        return 0;
        
        
    }
    int romanToInt(string s) {
        int n = s.length();
        int ans = 0;
        int v1 ,v2;
        for(int i =0;i<n;i++){
            v1 = calculate(s[i]);
            v2 = calculate(s[i+1]);
            if(v1 < v2){
                ans = ans - v1;
            }
            else{
                ans = ans + v1;
            }
        }
        return ans;
        
    }
};