class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        vector<int> result;
        int carry = true;
        for(int i=digits.size() - 1 ; i>=0 ; i--){
            if(i==digits.size() - 1){
                result.push_back((digits[i] + 1) % 10);
                carry = (digits[i] + 1) / 10;
            }
            else{
                result.push_back((digits[i] + carry ) %10);
                carry = (digits[i] + carry)/10;
            }
        }
        if(carry){
            result.push_back(carry);
        }
        reverse(result.begin() , result.end());
        return result;
    }
};
