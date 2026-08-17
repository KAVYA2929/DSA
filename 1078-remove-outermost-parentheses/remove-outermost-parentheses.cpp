class Solution {
public:
    string removeOuterParentheses(string s) {
        int n = s.length();
        stack<char>st;
        string ans;
        for(char ch : s){
            if(ch == ')'){
                st.pop();
            }
            if(!st.empty()){
                ans = ans + ch;
            }
            if(ch == '('){
                st.push(ch);
            }

        }   
        return ans;     
    }
};