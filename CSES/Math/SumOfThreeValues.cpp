#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll a[100003];
int main(){
    multimap <int,int> mp;
    vector<pair<ll,ll>>v;
    ll n ,x; cin >> n >> x;
    ll sum ;
    if(n < 3) {
        cout << "IMPOSSIBLE";
        return 0;
    }
    for(ll i =0; i < n; i++){
        cin >> a[i];
        v.push_back({a[i],i+1});
    }
    sort(v.begin(),v.end());
    for(ll i =0; i < v.size()-2; i++){
         sum = x -v[i].first;
         ll st = i+1;
         ll e = n-1;
         while(st < e){
            if(v[st].first + v[e].first == sum){
                cout <<v[i].second<<" "<< v[st].second << " "<<v[e].second<<endl;
                return 0;
            }
            else if(sum > v[st].first+v[e].first)
                st++;
            else e--;
         }

       // mp[a[i+1]] = i+ 2;
    }
    cout << "IMPOSSIBLE";

}
