#include<bits/stdc++.h>
using namespace std;

void fun(string s,int i,int sz){
     if(i == sz)
        return;
      s.erase(s.begin());
     cout << s << endl;
     fun(s, i+1,sz);
}

int main(){

    string s;
    getline(cin, s);
    fun(s,0,s.size());
}
