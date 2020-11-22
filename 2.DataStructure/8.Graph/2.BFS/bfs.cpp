
#include<bits/stdc++.h>
using namespace std;
vector< int > v[100];
queue< int > q;
int vis[100];
void store(){

for( int i = 0 ; i < 100; i++){
    vis[i] = 0;
  }
}
void bfs(int s){
    q.push(s);
    vis[s ] = 1;
    while(!q.empty()){
    int p = q.front();
    cout << p << " ";
    q.pop();
    for(int i = 0; i< v[p].size(); i++){
        if(vis[v[p][i]]== 0){
            vis[v[p][i]] = 1;
            q.push(v[p][i]);
        }
    }
    }
}

int main(){
    int n,e,x,y;
    cin >> n >> e;
    for(int i = 1; i <= e; i++){
        cin >> x >> y;
        v[x].push_back(y);
        v[y].push_back(x);
    }
    store();
    bfs(6);
}
