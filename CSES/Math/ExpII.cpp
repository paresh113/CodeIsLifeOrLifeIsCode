#include<bits/stdc++.h>
using namespace std;
#define ll long long
const long m = 1000000007;
ll power(ll a, ll b){
    ll res = 1;
    while(b){
        if(b % 2){
            res = (res * a) %m ;
            b--;
        }
        else{
            a = (a* a) %m;
            b = b/2;
        }
    }
    return res;
}
int main(){
    ll t,a,b,c;
    cin >> t;
    while(t--){
            cin >> a >> b>>c;

       // ll res = power(b,c,m);
        ll res2 = power(a, power(b,c));
        cout << res2 << endl;
    }
}

