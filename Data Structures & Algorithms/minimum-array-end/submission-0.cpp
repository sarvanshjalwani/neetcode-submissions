class Solution {
public:
    long long minEnd(int n, int x) {
        long long ans = x;
        long long remaining  = n -1 ;
        for(int i=0 ; remaining>0 ; i++){
            if(((ans>>i) & 1LL) == 0 ){
                if (remaining & 1LL) {
                    ans |= (1LL << i);
                }
                remaining>>=1;
            }
        }
        return ans;
    }
};