class Solution {
public:
    int maxNumberOfBalloons(string text) {
        int n = text.length();
        unordered_map<char,int> mpp;
        for(int i =0;i<n;i++){
            mpp[text[i]]++;
        }
        int ans = min({
        mpp['b'],
        mpp['a'],
        mpp['l']/2,
        mpp['o']/2,
        mpp['n'],

        });
        return ans;
        
    }
};