#include<iostream>
#include<bits/stdc++.h>
using namespace std;
bool isOperator(string s){
    if(s == "+" || s == "-"|| s == "*"|| s == "/")
        return true;
    else return false;
}
int Precedence( string s){
     if(s == "+" || s=="-")
        return 1;
     else if(s == "*" || s =="/")
        return 2;
     else return -1;
}
//int cal(string s,int a,int b){
//    switch(s){
//    case "+":
//        return a+b;
//    case "-":
//        return a-b;
//    case "*":
//        return a*b;
//    case "/":
//        return a/ b;
//    }
//}
int evaluation(vector<string>& v){
     stack < int > st;
     for(int i = 0; i < v.size(); i++){
        if(isOperator(v[i])){
            int b = st.top();
            st.pop();
            int a = st.top();
            st.pop();

            if(v[i] == "+")
                st.push(a + b);
            else if(v[i] == "-")
                st.push(a - b);
            else if(v[i] == "*")
                st.push(a*b);
            else if(v[i] == "/")
                st.push(a/b);
        }
        else{
            int val = 0, j = 0;
        while(j < v[i].size()){
            val = val * 10 + (v[i][j] - '0');
            j++;
        }
        st.push(val);
        }

    }
    return st.top();
    st.pop();
}

int main(){
    string s; cin >> s;
    vector< string > v;
     vector< string > postfix;
    stack<string > stc;
    stc.push("n");

    for(int i = 0; i < s.size(); i++){
            if(isdigit(s[i])){
                     string exp = "";
                    int j = i;
            while(isdigit(s[j])){
                exp += s[j];
                j++;
                }
                v.push_back(exp);
                i = j - 1;   /// i++ er jonno i er man emnitei 1 barbe loope
            }
            else{
                string t(1,s[i]);
                v.push_back(t);
            }
    }
        for(int i = 0 ; i < v.size(); i++){
        cout << v[i] << " ";
    }
    cout << endl;

    for(int i = 0; i < v.size(); i++){
        if(isOperator(v[i])){
            while(Precedence(v[i]) <= Precedence(stc.top()) && stc.top()!= "n"){
                postfix.push_back(stc.top());
                stc.pop();
            }
            stc.push(v[i]);
        }
        else if(v[i] == "("){
            stc.push(v[i]);
        }
        else if(v[i] == ")"){
            while(stc.top() != "("){
                 postfix.push_back(stc.top());
                stc.pop();
            }
            stc.pop();
        }
        else{
             postfix.push_back(v[i]);
        }
    }
    while(stc.top()!="n"){
        postfix.push_back(stc.top());
        stc.pop();
    }
    for(int i = 0 ; i < postfix.size(); i++){
        cout << postfix[i] << " ";
    }

    int res = evaluation(postfix);
   cout << res << endl;




}
