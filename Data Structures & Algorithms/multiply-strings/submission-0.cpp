class Solution {
public:
    string multiply(string num1, string num2) {
        if(num1 == "0" || num2 == "0"){
            return "0";
        }
        vector<int> result(num1.length() + num2.length() , 0);
        reverse(num1.begin(),num1.end());
        reverse(num2.begin(),num2.end());

        for(int i= 0 ; i<num1.length() ; i++){
            for(int j=0 ; j<num2.length() ; j++){
                result[i + j] += (num1[i] - '0')*(num2[j] - '0');
                result[i + j + 1] += (result[i+j]/10);
                result[i + j] = result[i+j]%10;
            }
        }
        string ans;
        int i = num1.length() + num2.length() - 1;
        while(result[i]==0){
            i--;
        }
        while(i>=0){
            ans+=(result[i--]+'0');
        }
        return ans;
    }
};
