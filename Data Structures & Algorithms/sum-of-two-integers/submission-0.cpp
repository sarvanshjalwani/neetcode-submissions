class Solution {
public:
    int getSum(int a, int b) {
        int ans = 0;
        int carry = 0;
        for(int i =0  ; i<32; i++){
            int bit1 = a&1;
            int bit2 = b&1;
            int sum = bit1 + bit2 + carry;
            int bit = sum % 2;
            if(bit){
                ans|=(1<<i);
            }
            carry = sum / 2;
            a = a>>1;
            b = b>>1;
        }
        return ans;
    }
};
