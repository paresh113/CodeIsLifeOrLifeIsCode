class Solution {
public:
    stack < int > st;
    bool isOperator(string C){
        if(C == "+" || C == "-" || C == "*" || C == "/"|| C == "^")
            return true;

        return false;
    }
    int evalRPN(vector<string>& tokens) {
        for(int i = 0; i < tokens.size(); i++){
            if(isOperator(tokens[i])){
                int b = st.top();
                st.pop();
                int a = st.top();
                st.pop();

                if(tokens[i] == "+"){
                    st.push(a+b);
                }
                else if(tokens[i] == "-"){
                    st.push(a-b);
                }
                else if(tokens[i] == "*"){
                    st.push(a*b);
                }
                 else if(tokens[i] == "/"){
                    st.push(a/b);
                }

            }
            else {
                int val = 0, j = 0,s = 0;

                while(j < tokens[i].size()){
                    if(tokens[i][j] == '-'){ j++; s = -1;}
                    val = val * 10 + (tokens[i][j] -'0');
                    j++;
                }
                if(s == -1)
                st.push(val*s);
                else st.push(val);
            }
        }
    int ans = st.top();
    st.pop();
    return ans;


    }

};
