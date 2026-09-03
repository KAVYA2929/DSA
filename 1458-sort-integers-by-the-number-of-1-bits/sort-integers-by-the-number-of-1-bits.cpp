class Solution {
public:
    int find1bit(int num){
        int cnt = 0;
        while(num){
            if(num & 1){
                cnt++;
            }
            num >>= 1;

        }
        return cnt;
    }

    vector<int> sortByBits(vector<int>& arr) {
        int n = arr.size();
        auto lambda = [&](int &a,int&b){
        int CA = find1bit(a);
        int CB = find1bit(b);
        if(CA == CB){
            return a<b;
        }else{
            return CA<CB;
        }

    };
        sort(arr.begin(),arr.end(),lambda);
        return arr;
        
    }
};