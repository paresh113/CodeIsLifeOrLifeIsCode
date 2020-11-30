#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    vector<pair<int,int>> v;
    ll n,x,y; cin >> n;
    for(ll i = 0; i <n; i++){
        cin>>x>>y;
        v.push_back({x,0});
        v.push_back({y,1});
    }

    sort(v.begin(),v.end());
    int cnt = 0, res = 0;
    for(int i = 0; i < v.size();i++){
        if(v[i].second == 0)
            cnt++;
        else cnt--;
        res = max(res,cnt);
    }
    cout << res << endl;

}
