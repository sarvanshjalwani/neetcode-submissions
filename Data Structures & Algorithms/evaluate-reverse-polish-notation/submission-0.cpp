class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<string> st;
        for(int i= 0 ; i<tokens.size() ; i++){
            string c =  tokens[i];
            if(c=="*" || c=="+" || c=="-" || c == "/"){
                int b = stoi(st.top());
                st.pop();
                int a = stoi(st.top());
                st.pop();
                if(c=="*"){
                    st.push(to_string(a*b));
                }
                if(c=="+"){
                    st.push(to_string(a+b));
                }
                if(c=="-"){
                    st.push(to_string(a-b));
                }
                if(c=="/"){
                    st.push(to_string(a/b));
                }
            }
            else {
                st.push(tokens[i]);
            }
        }
        return stoi(st.top());
    }
};
