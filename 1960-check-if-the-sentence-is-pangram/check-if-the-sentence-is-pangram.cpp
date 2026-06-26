class Solution {
public:
    bool checkIfPangram(string sentence) {
        int n = sentence.length();
        vector<int>arr(26,0);
        int count = 0;
        for(int i =0;i<n;i++){
            if(arr[sentence[i] - 'a'] == 0){
                arr[sentence[i] - 'a']++;
                count++;

            }
            if(count == 26){
                return true;
            }


        }
        return false;
        
    }
};