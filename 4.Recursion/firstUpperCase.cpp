#include<bits/stdc++.h>
using namespace std;

char upper(string s,int i){
    if(s[i] == '\0') return 0;
    if(s[i] >= 65 && s[i] <= 90) return s[i];
    return upper(s,i + 1);


}

int main(){
    string s;
    cin >> s;
    cout << upper(s,0);
}
