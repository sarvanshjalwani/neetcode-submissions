class Solution {
public:
    long long minEnd(int n, int x) {
        long long x_new = x;
        int num = n - 1;
        long long ans = x;
        for(int i= 0 ; num>0 ; i++){
            if((x_new>>i & 1) == 0){
                ans = ((long long)(num & 1)<<i) | ans;
                num = num>>1;
            }
        }
        return ans;
    }
};