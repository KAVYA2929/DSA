class Solution {
public:
    string reorganizeString(string s) {

        vector<int>freq(26,0);

        for(char ch : s){
            freq[ch - 'a']++;
        }

        priority_queue<pair<int ,char>>pq;

        for(int i =0;i<26;i++){
            if(freq[i] > 0){
                pq.push({freq[i],i + 'a'});
            }
        }

        string ans = "";
        pair<int ,char>prev = {0,'#'};

         while(!pq.empty()){

            pair<int ,char>curr = pq.top();
            pq.pop();

            ans += curr.second;
            curr.first--;

            if(prev.first > 0){
                pq.push(prev);
            }
            prev = curr;

            

         }
         if(s.length() != ans.length()){
                return "";
        }
         return ans;
    }
};