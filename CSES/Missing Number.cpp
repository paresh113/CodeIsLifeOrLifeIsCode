#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){

   ll n; cin >>n;
   ll a[n + 1],ans = 0;
    for(int i = 0; i < n -1; i++){
            cin >> a[i];
    }
   ll sum = (n*(n+1))/2;
   for(int i = 0; i < n -1; i++){
     ans += a[i];
   }
   ll res = sum - ans;
   cout << res << endl;

}

