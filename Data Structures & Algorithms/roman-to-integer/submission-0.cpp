class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char,int> umap = {{'I' , 1} , {'V' , 5} , {'X' , 10} , {'L' , 50} , {'C' , 100} , {'D' , 500} , {'M' , 1000}};
        char prev='.';
        char cur;
        int sum = 0;
        for(int i=0  ; i<s.length() ; i++){
            cur = s[i];
            if(prev=='I' && cur=='V'){
                sum--;
                sum+=4;
            }
            else if(prev=='I' && cur=='X'){
                sum--;
                sum+=9;
            }
            else if(prev=='X' && cur=='L'){    
                sum-=10;
                sum+=40;
            }
            else if(prev=='X' && cur=='C'){
                sum-=10;
                sum+=90;
            }
            else if(prev=='C' && cur=='D'){
                sum-=100;
                sum+=400;
            }    
            else if(prev=='C' && cur=='M'){
                sum-=100;
                sum+=900;
            }
            else{
                sum+=umap[cur];
            }
            prev = cur;
        }
        return sum;
    }
};