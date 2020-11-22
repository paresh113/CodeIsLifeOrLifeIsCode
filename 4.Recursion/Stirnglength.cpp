#include<bits/stdc++.h>
using namespace std;


int length(string s,int i){
    if(s[i] == '\0') return 0;
    return length(s,i+1) + 1;


}

int main(){
    string s;
    getline(cin,s);
    int i =0;
    cout << length(s,0);
}

