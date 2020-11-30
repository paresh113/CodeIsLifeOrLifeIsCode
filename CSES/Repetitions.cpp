#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
   stack < char > st;
    string str; cin >> str;
    st.push(str[0]);
    ll cnt =1,mx = 1;
    for(int i = 1 ; i < str.size();i ++){
            if(st.top() == str[i]){
                 cnt++;
                 st.push(str[i]);
            }
            else{
                while(!st.empty()){
                    st.pop();
                }
                cnt = 1;
                st.push(str[i]);
            }
           if( cnt > mx )
                mx = cnt;
    }
    cout << mx << endl;
}
