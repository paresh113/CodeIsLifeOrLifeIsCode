#include <bits/stdc++.h>
using namespace std;


int main (){

     string s;
     getline(cin,s);
     set < char > st;
     for (int i =0; i < s.size(); i++){
        st.insert(s[i]);
     }
    set < char > :: iterator it;
    for(it = st.begin(); it != st.end(); it ++){
        cout << *it ;
    }

}
