#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll power(ll a, ll b,ll m){
    ll res = 1;
    while(b){
        if(b % 2){
            res =res%m * a %m ;
            b--;
        }
        else{
            a =a%m * a%m;
            b = b/2;
        }
    }
    return res;
}
int main(){
    ll t,a,b;
    cin >> t;
    while(t--){
            cin >> a >> b;
        ll res = power(a,b,1000000007);
        cout << res << endl;
    }
}
