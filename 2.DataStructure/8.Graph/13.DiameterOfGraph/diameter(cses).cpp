#include<bits/stdc++.h>
using namespace std;

#define ll long long
int mx = INT_MIN;
vector< int > v[200001];
int vis[200001];
int node;
int dfs(int s, int temp){
    vis[s] = 1;
    temp++;
    if(temp > mx){
        mx = temp;
        node = s;
    }
    for(ll child : v[s]){
        if(!vis[child]){
            dfs(child,temp);
        }
    }
    return node;
}
int main(){
    ll n,x,y; cin >> n;
    memset(vis, 0, sizeof(vis));
    for(ll i =1; i < n; i++){
        cin >> x >> y;
        v[x].push_back(y);
        v[y].push_back(x);
    }
    int t = dfs(1,0);
    memset(vis , 0 , sizeof(vis));
    dfs(t, 0);
    cout << mx-1 << endl;
}
