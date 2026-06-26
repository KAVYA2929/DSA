class Solution {
public:
    bool backspaceCompare(string s, string t) {
        int n = s.length();
        int m = t.length();
        string ans = "";
        string beta = "";
        for(int i =0;i<n;i++){
            if(s[i] != '#'){
                ans.push_back(s[i]);
            }
            else if(!ans.empty()){
                ans.pop_back();
            }
        }
        for(int i =0;i<m;i++){
            if(t[i] != '#'){
                beta.push_back(t[i]);
            }
            else if(!beta.empty()){
                beta.pop_back();
            }
        }
        if(ans == beta){
            return true;
        }
        return false;
       
        
    }
};