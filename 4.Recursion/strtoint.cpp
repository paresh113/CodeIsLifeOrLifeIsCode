#include<bits/stdc++.h>
using namespace std;

int func(string s,int i){
    int sum = 0,sz = s.size();
    if(i == 1) return s[sz-1]-'0';
    else {
        sum += pow(10,i-1)*(s[sz-i]-'0');
        return  sum + func(s,i-1);
    }

}
int main(){
    string s;
    cin >> s;
    cout << func(s,s.size());
}
