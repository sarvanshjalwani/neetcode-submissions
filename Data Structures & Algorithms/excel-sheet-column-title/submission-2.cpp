class Solution {
public:
    string convertToTitle(int columnNumber) {
        string ans = "";
        int n = columnNumber - 1;
        while(n>=26){
            ans = char('A' + n%26) + ans;
            n = n / 26 - 1 ;
        }
        ans = char('A'+ n ) + ans;
        return ans;
    }
};