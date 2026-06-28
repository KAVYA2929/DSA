class Solution {
public:
    bool checkPerfectNumber(int num) {
        int final = 0;
        for(int i =1;i<num;i++){
            if(num % i == 0){
                final = final + i;

             }
        }
         if(final == num){
                return true;
         }
         else{
            return false;
         }

        
    }
};