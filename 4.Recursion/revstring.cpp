#include<bits/stdc++.h>
using namespace std;
void revstr(string s,int i){
     if(i == s.size())
        return;
    else{
     revstr(s,i+1);
     cout << s[i];
    }
   // cout << endl;
}
int main(){
    string s;
    int sz = s.length();
    while(getline(cin,s)){
         revstr(s,0);
    cout << endl;
    }
}
