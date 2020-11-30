#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll n; cin >> n;
    ll best = INT_MIN, sum = INT_MIN,a[200005];
    for(ll i = 0; i < n; i++)
        cin >> a[i];
    for(ll i = 0; i < n; i++){
        sum = max(a[i],sum + a[i]);
        best = max(best,sum);
    }
    cout << best << endl;

}

