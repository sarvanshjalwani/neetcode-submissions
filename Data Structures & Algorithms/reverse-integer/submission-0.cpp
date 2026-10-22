class Solution {
public:
    int reverse(int x) {
        int res = 0;
        while(x){
            int digit = x%10;
            if(res > (INT_MAX - digit) / 10 ){
                return 0;
            }
            if(res < (INT_MIN - digit)/10 ){
                return 0;
            }
            res = res * 10 + digit;
            x/=10;
        }
        return res;
    }
};
