#include<bits/stdc++.h>
using namespace std;

bool func(string s,int i,int e){
    if(i >= e) return true;
    else if(s[i]!= s[e]) return false;
    func(s,i+1,e-1);
}
int main(){
    string s; cin >> s;
    if(func(s,0,s.size()-1)==true)
        cout << "yes" << endl;
    else cout << "no" <<endl;
}
