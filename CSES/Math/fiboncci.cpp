#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll fibo(ll n, ll m){
    ll i,j;
    ll dp[i][j];
    if(n == 0) return 0;
    if(n == 1) return 1;
    return fibo((n-2)%m,m) + fibo((n-1)%m,m);
}
int main(){
    ll n; cin >> n;
    cout << fibo(n, 1000000007);
}
