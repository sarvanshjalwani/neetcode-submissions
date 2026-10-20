class Solution {
public:
    double myPow(double x, int n) {
        if(x==0)    return 0;
        long power = abs(n);
        double ans = 1;
        while(power){
            if(power%2){
                ans = ans * x;
            }
            x = x * x;
            power = power/2;
        }
        if(n<0){
            return 1 / ans;
        }
        return ans;
    }
};
