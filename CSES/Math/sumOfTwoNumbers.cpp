#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    map < int, int > mp;
    ll n,x,y; cin >>n >> x;
    for(ll i =0; i < n; i++){
        cin >>y;
        if(mp.find(x-y) != mp.end()){
            cout<<mp[x-y] <<" "<< i + 1<<endl;
            return 0;
        }
        else
            mp.insert({y,i+1});
    }

    cout << "IMPOSSIBLE"<<endl;
}
