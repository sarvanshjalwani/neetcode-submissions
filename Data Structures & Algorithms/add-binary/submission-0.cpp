class Solution {
public:
    string addBinary(string a, string b) {
        if(a.length() < b.length()) return addBinary(b,a);
        int max_length = a.length();
        int min_length = b.length();
        for(int i = 0 ; i<max_length - min_length ; i++){
            b.insert(0,"0");
        }
        int carry = 0;
        string ans ="";
        int i = max_length - 1;
        for(;i>=0 ; i--){
            int sum = int(a[i] - '0') +  int(b[i] -'0') + carry;
            int num = sum%2;
            carry = sum / 2;
            ans.push_back(num +'0');
        }
        if(carry){
            ans.push_back('1');
        }
        reverse(ans.begin() ,ans.end());
        return ans;
    }
};