#include<bits/stdc++.h>
using namespace std;
#define ll long long
int a[200005];
int main(){

    ll n,k; cin >> n>> k;
    set<int> s;
    ll sum = 0,cnt = 0;
    for(ll i = 0; i < n; i++){
        cin >> a[i];
        sum += a[i];
        s.insert(sum);
        if(a[i] == k) cnt++;
        else if(s.find(sum - k) != s.end())cnt++;
        else if(sum == k)cnt++;


    }
    cout << cnt << endl;
}
