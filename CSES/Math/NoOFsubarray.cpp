#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){

    ll n,x,y; cin >>n>>x;
    map <ll,ll>mp;
    mp[0]++;
    ll sum = 0,res = 0;
    for(ll i = 0; i < n; i++){
            cin >>y;
            sum += y;
            res += mp[sum-x];
            mp[sum]++;
    }
    cout << res << endl;
}
