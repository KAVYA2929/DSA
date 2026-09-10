class Solution {
public:
    int closestTarget(vector<string>& words, string target, int startIndex) {
        int n = words.size();
        int result = INT_MAX;

        for(int i =0;i<n;i++){
            if(words[i] == target){
                int straightdistance = abs(i - startIndex);
                int circulardistance = n - straightdistance;

                result = min({result , straightdistance , circulardistance});
            }
        }
        if(result == INT_MAX){
            return -1;
        }else{
            return result;
        }
        
    }
};