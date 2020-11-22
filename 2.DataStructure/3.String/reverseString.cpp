#include<bits/stdc++.h>
using namespace std;


int main(){

    stack < char > st;
    string s;
    getline(cin, s);

    for( int i = 0; i < s.size(); i++){

        if(s[i] != ' ' &&  s[i] !='\n' && s[i] !='\t')
            st.push(s[i]);
        else
        {
            while(!st.empty()){
                cout << st.top() ;
                st.pop();
            }
            cout << s[i];
        }
    }
        while(!st.empty()){
        cout << st.top() ;
        st.pop();
        }
}
