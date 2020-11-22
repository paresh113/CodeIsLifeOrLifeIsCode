
#include<bits/stdc++.h>
using namespace std;

unordered_set < char > st;

int main(){
    string s;

    cin >> s;
    vector< char> v;

    for(int i = 0; i < s.size(); i++){
       v.push_back(s[i]);
    }
    bool dup = false;
    for(int i = 0; i < v.size(); i++){

        if(st.find(v[i]) == st.end()){
            st.insert(v[i]);
        }


    }
unordered_set < char > :: iterator it;

for( it = st.begin(); it != st.end(); it ++){
    cout << *it ;
}


}
