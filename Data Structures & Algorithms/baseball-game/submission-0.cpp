class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<string> st;
        int n = operations.size();
        for(int i= 0 ; i<n ; i++){
            string c = (operations[i]);
            if(c == "C"){
                st.pop();
            }
            else if(c == "D"){
                st.push(to_string(stoi(st.top())*2));
            }
            else if(c == "+"){
                string a = st.top();
                st.pop();
                string p = to_string(stoi(a) + stoi( st.top() ));
                st.push(a);
                st.push(p);
            }
            else{
                st.push(operations[i]);
            }
        }
        int ans = 0;
        while(!st.empty()){
            ans+=stoi(st.top());
            st.pop();
        }
        return ans;
    }
};