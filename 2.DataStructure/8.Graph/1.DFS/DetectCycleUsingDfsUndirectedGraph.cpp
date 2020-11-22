#include<bits/stdc++.h>
using namespace std;


/// help : geekforgeeks

vector< int > v[200];
s
int vis[200] = {0};
int parr[200];
int flag = 0;
void dfs(int n,int par){
     vis[n] = 1;
     for(int i = 0; i < v[n].size();i++){
            int t = v[n][i];
        if(vis[t] == 0){
                vis[t] = 1;
            parr[t] = n;    /// parent identified
            dfs(t, n);
        }
        else if(vis[t] == 1 && parr[t] != par){   /// backedge presents  ///(backedge)jenny's lecture
            flag = 1;
        }

     }

}

int main(){
    int nodes, edges,x,y;
    cin >> nodes >> edges;
    for(int i = 0; i < edges; i++){
        cin >> x >> y;
        v[x].push_back(y);
    }
    dfs(0,-1);  /// for root, parent = -1
    if(flag == 1) cout << "Cycle exist";
    else cout << "Cycle not exist";

}
