
#include<bits/stdc++.h>
using namespace std;

vector < int > v[20];
int vis[200];
int stk[200];



bool dfs(int s){

    vis[s] = 1;
    stk[s] = 1;

    for(int i = 0; i  < v[s].size(); i++){
        int t = v[s][i];
        if(vis[t] == 0){
            //vis[t] = 1;
            dfs(t);
        }
        else if(stk[t] == 1){
              return true ;
        }
    }
    return false;
}

int main(){
    int n,e,x,y;
    memset(vis,0,sizeof(vis));
     memset(stk,0,sizeof(stk));
    cin >> n >> e;
    for(int i = 0; i <e; i++){
        cin >> x >> y;
        v[x].push_back(y);
       // v[y].push_back(x);
    }

    cout << dfs(1);
}
