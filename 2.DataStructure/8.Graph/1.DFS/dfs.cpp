#include<iostream>
#include<bits/stdc++.h>
using namespace std;

vector < int > v[100];
int vis[100];

void store(){
    for( int i =0 ; i < 100; i++){
          vis[i] = 0;
    }
}

void dfs(int s){
    cout << s <<" ";
    vis[s] = 1;
    for(int i = 0; i < v[s].size(); i++){
        if(vis[v[s][i]] == 0){
            dfs(v[s][i]);
        }
    }
}


int main (){

    int n,e,x,y;
    cin >> n >> e;
    for(int i = 1 ; i <= e; i++){
        cin >> x >> y;
        v[x].push_back(y);
        v[y].push_back(x);
    }
    store();
    dfs(1);

}
