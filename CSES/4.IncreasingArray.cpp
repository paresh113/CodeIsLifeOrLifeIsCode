#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){

    ll a[400004],n;
    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    ll cnt = 0;
    for(int i = 0; i < n - 1; i++){
        if(a[i]-a[i + 1] > 0 ){
            ll t = a[i] - a[i + 1];
            cnt += t;
            a[i + 1] += t;
        }
    }
    cout << cnt << endl;

}
