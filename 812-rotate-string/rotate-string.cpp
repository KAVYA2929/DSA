class Solution {
public:
    bool rotateString(string s, string goal) {
        int n = s.length();
        int m = goal.length();
        if(m != n){
            return false;
        }
        for(int i = 0;i<n;i++){
            string temp = s;
            rotate(temp.begin(),temp.begin()+i,temp.end());
            if(temp == goal){
                return true;
            }
        }
        return false;
        
    }
};