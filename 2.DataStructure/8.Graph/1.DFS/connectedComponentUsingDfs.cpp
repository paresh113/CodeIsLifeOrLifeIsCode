#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int vis [1000];
vector < int > v[10];
void dfs(int s){
    vis[s] = 1;
    cout << s <<" ";
    for(int i = 0; i < v[s].size();i++){
        if(vis[v[s][i]] == 0){
            dfs(v[s][i]);
            vis[v[s][i]] = 1;
        }
    }

}

int main(){
    int node,edge,x,y;
    memset(vis,0,sizeof(vis));
    cin >> node >> edge;
    for(int i = 1; i <= edge; i++){
        cin >> x >>y;
        v[x].push_back(y);
        v[y].push_back(x);
    }
    //dfs(1);
    int cnt = 1;
    for(int i = 1 ; i<= node; i++){
       if(!vis[i]){
        dfs(i);
        cnt++;
       }
    }
    cout <<endl<< cnt << endl;

}
