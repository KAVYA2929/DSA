class Solution {
public:
    int findNthDigit(int n) {
        long long digit = 1;
        long long start = 1;
        long long count = 9;
        while(n > digit * count){
            n = n - digit * count;
            digit++;
            start = start * 10;
            count = count * 10;
        }
        int num = (n-1) / digit;
        num = num + start;
        int index = (n - 1) % digit;

        string s = to_string(num);
        return s[index] - '0';
        
    }
};