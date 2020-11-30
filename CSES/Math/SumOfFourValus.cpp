#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    multimap <int,int> mp;
    vector<pair<ll,ll>>v;
    ll n ,x,y; cin >> n >> x;
    ll sum ;
    if(n < 4) {
        cout << "IMPOSSIBLE";
        return 0;
    }
    for(ll i =0; i < n; i++){
        cin >> y;
        v.push_back({y,i+1});
    }
    sort(v.begin(),v.end());
    for(ll i =0; i < v.size()-3; i++){
         sum = x -(v[i].first + v[i+1].first);
         ll st = i+2;
         ll e = n-1;
         while(st < e){
            if(v[st].first + v[e].first == sum){
                cout <<v[i].second<<" "<<v[i+1].second<<" "<< v[st].second << " "<<v[e].second<<endl;
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

