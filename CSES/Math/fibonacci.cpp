#include<bits/stdc++.h>
using namespace std;

#define ll long long
const long m = 1000000007; /// modulo
map<ll, ll> F;

ll f(ll n){
    //cout << F.count(n) << endl;
    if(F.count(n)) return F[n]; /// jar man jano seta return koro // 0,1 er man jana ekdom prothome
    ll k = n/2;
    if(n%2 == 0){
       return  F[n] = (f(k)* f(k) + f(k-1) * f(k-1))%m;
    }
    else if(n%2){
       return F[n] = (f(k) * f(k+1) + f(k)* f(k-1))%m;
    }

}
int main(){
    ll n; cin >> n;
    F[0] = 1;
    F[1]= 1;

    //if(n == 0 ? cout << "0" : cout << f(n-1) );
    cout << (n==0 ? 0 :f(n-1)  );
}
