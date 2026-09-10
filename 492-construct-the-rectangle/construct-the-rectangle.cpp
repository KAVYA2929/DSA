class Solution {
public:
    vector<int> constructRectangle(int area) {
        int a = 0;
        int min = INT_MAX;
        int b = 0;
        int j = 0;
        
        for(int i = 1 ;i <= area;i++){
            if(area % i == 0){
                 j = area / i ;
            }
            if(i >= j && i - j < min){
                min = i - j;
                a = i;
                b = j;
            }
        }
        return {a ,b};
        
    }
};