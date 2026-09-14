class Solution {
public:

    int overlaps(vector<vector<int>>& img1, vector<vector<int>>& img2,int rowoff,int coloff){
        int n = img1.size();
        int cnt = 0;

        for(int i = 0;i<n;i++){
            for(int j =0;j<n;j++ ){
                int b_i = i + rowoff;
                int b_j  = j + coloff;

                if(b_i < 0 || b_i >= n || b_j < 0 || b_j>=n){
                    continue;
                }
                if(img1[i][j] ==1 && img2[b_i][b_j] == 1){
                    cnt++;
                }

            }
        }
       

        
        return cnt;

    }

    int largestOverlap(vector<vector<int>>& img1, vector<vector<int>>& img2) {
        int n = img1.size();
        int maxoverlap = 0;


        for(int row_index = -n+1;row_index<n;row_index++){
            for(int col_index = -n+1;col_index<n;col_index++){
                int count = overlaps(img1,img2,row_index,col_index);
                maxoverlap = max(maxoverlap , count);

            }
        }
        return maxoverlap;
        
        
    }
};