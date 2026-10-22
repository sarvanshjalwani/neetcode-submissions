class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        uint32_t ans = 0;
        for(int i=0 ; i<31 ; i++){
            int bit = n & 1;
            ans = ans | bit;
            ans = ans << 1;
            n = n >> 1;
        }
        int bit=n&1;
        ans = ans | bit;
        return ans;
    }
};
