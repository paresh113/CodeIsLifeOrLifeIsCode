#include<bits/stdc++.h>
using namespace std;

int main(){

    string str;
    cin >> str;

    int st = 0,e= str.size()-1;
    while (st < e){
        str[st]^= str[e];
        str[e]^=str[st];
        str[st]^=str[e];
        st++;
        e--;
    }
    cout << str << endl;


}
