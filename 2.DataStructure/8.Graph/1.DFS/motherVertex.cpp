
#include<bits/stdc++.h>
using namespace std;

int vis[100];
vector < int > v[100];


void dfs(int s){

     vis[s] = 1;

     for(int i = 0; i < v[s].size(); i++){
        int t = v[s][i];
        if( vis[t] == 0){
            dfs(t);
            vis[t] = 1;
        }
     }
}
int main() {
    int n,e; cin >> n >> e;
    memset(vis, 0 , sizeof(vis));
    for(int i =0; i < e; i++){
        int x,y; cin >> x >> y;
        v[x].push_back(y);
       // vis[y] = 1;
    }
    int mother = 0;
    for(int i = 0; i < n; i ++){
        if(vis[i] == 0){
            dfs(i);
            mother = i;
        }
    }
    memset(vis, 0 , sizeof(vis));
    dfs(mother);
    for(int i = 0; i < n; i ++){
        if(vis[i] == 0){
           cout << "No mother vertex";
           return 0;
        }
    }
     cout << "Mother vertex = "<<mother << endl;

}
