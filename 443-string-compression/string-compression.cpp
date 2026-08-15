class Solution {
public:
    int compress(vector<char>& chars) {
        int i = 0;
        int n = chars.size();
        int index = 0;
        while(i<n){
            char ch = chars[i];
            int count = 0;
            while(i<n && chars[i] == ch){
                count++;
                i++;
            }
            chars[index] = ch;
            index++;
            if(count >1){
                string cnttostr = to_string(count);
                for(int i=0;i<cnttostr.length();i++){
                    chars[index] = cnttostr[i];
                    index++;
                }
            }

        }
        return index;
        
    }
};