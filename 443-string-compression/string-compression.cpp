class Solution {
public:
    int compress(vector<char>& chars) {
        int n = chars.size();
        int i = 0;
        int index = 0;
        while(i<n){
            int count = 0;
            char ch = chars[i];
            while(i<n && chars[i] == ch){
                count++;
                i++;
            }
            chars[index] = ch;
            index++;
            if(count > 1){
                string count_str = to_string(count);
                for(int i =0;i<count_str.length();i++){
                chars[index] = count_str[i];
                index++;
                }
            }
        }
        return index;
        
    }
};