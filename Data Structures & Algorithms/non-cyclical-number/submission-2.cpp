class Solution {
public:
    bool isHappy(int n) {
        unordered_set<int> st;
        while(st.find(n)==st.end()){
            st.insert(n);
            int temp = 0;
            while(n){
                int r = n%10;
                temp+=r*r;
                n = n/10;
            }
            n = temp;
            cout<<n<<endl;
            if(n==1){
                return true;
            } 
        }
        return false;
    }
};
