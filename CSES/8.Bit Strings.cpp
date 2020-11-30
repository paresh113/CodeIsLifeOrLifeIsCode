#include<bits/stdc++.h>
using namespace std;
#define ll long long int
//
//ll power(ll a,ll b){
//    ll res = 1;
//    while(b){
//        if(b%2){
//            res *=a;
//            b--;
//        }
//        else{
//            a *=a;
//            b /= 2;
//        }
//    }
//    return res;
//}
long long binpow(long long a, long long b, long long m) {
    a %= m;
    long long res = 1;
    while (b > 0) {
        if (b & 1)
            res = res * a % m;
        a = a * a % m;
        b >>= 1;
    }
    return res;
}

int main(){
    ll n; cin >> n;
    cout << binpow(2,n,1000000007);
}
