class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> result(n+1,0);
        for(int i=0 ; i<=n ; i++){
            int cnt=  0;
            int num = i;
            while(num){
                if(num&1)   cnt++;
                num>>=1;
            }
            result[i] = cnt;
        }
        return result;
    }
};
