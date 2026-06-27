class Solution {
public:
    string removeDuplicateLetters(string s) {
        string result = "";
        int n = s.length();
        vector<int>lastindex(26);
        vector<bool>taken(26,false);
        for(int i =0;i<n;i++){
            char ch = s[i];
            lastindex[ch - 'a'] = i;

        }
        
        for(int i = 0;i<n;i++){
            char c = s[i];
            if(taken[c - 'a'] == true){
                continue;
            }
            while(result.length()>0 && result.back() >c && lastindex[result.back() - 'a'] > i){
                taken[result.back() - 'a'] = false;
                result.pop_back();
            }
            result.push_back(c);
            taken[c - 'a'] = true;
        }
        return result;
        
    }
};