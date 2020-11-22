#include<bits/stdc++.h>
using namespace std;


bool func(string st, int s,int e){
      if(s > e) return true;
      if(st[s]==st[e]) return func(st, s+1,e-1);

      return false;
}

int main(){
    string s;
    cin >> s;
    getline(cin,s);
    cout << func(s,0,s.size()-1);
}
