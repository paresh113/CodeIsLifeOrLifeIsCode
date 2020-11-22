#include<bits/stdc++.h>
using namespace std;

void func(string s,int i){
     if (i > s.length()) return;

     if(s[i] == 'p' && s[i+1] == 'i'){
        cout << "3.14";
        func(s,i+2);
     }
     else{
            cout<< s[i];
            func(s,i+1);
     }
     //return s;
}

int main(){
    string s;
    getline(cin,s);
    func(s,0);
}
