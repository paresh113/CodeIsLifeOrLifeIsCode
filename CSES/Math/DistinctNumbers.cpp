#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
     ll n,x; cin>> n;
     set<int> s;
     for(ll i = 0; i < n; i++){
        cin >> x;
        if(s.find(x) == s.end()){
            s.insert(x);
        }
     }
     cout << s.size() << endl;
}
