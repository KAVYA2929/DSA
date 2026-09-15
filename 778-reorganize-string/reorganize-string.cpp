class Solution {
public:
    string reorganizeString(string s) {
        int n = s.length();

        vector<int> freq(26, 0);

        // Count frequency
        for(char c : s) {
            freq[c - 'a']++;
        }

        // Find most frequent character
        int maxFreq = 0;
        char maxChar;

        for(int i = 0; i < 26; i++) {
            if(freq[i] > maxFreq) {
                maxFreq = freq[i];
                maxChar = 'a' + i;
            }
        }

        // Impossible
        if(maxFreq > (n + 1) / 2) {
            return "";
        }

        string ans(n, ' ');

        int index = 0;

        // Put most frequent character first
        while(freq[maxChar - 'a'] > 0) {
            ans[index] = maxChar;
            index += 2;
            freq[maxChar - 'a']--;
        }

        // Put remaining characters
        for(int i = 0; i < 26; i++) {
            while(freq[i] > 0) {
                if(index >= n) {
                    index = 1;
                }

                ans[index] = 'a' + i;
                index += 2;
                freq[i]--;
            }
        }

        return ans;
    }
};