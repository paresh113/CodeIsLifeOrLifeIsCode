
#include<bits/stdc++.h>
using namespace std;


/// help : geekforgeeks

vector< int > v[200];
bool st[100];

int vis[200] = {0};


int dfs(int n){
     vis[n] = 1;
     st[n] = true;
     for(int i = 0; i<v[n].size();i++){
            int t = v[n][i];
            if(!vis[t]){
                dfs(t);
            }
            else if( st[t] == true){
                   // cout << "ijgo";
                return 1;
            }

     }
    st[n] = false;
    return false;

}

bool cyclic(int n){

    for(int i = 0;  i < n; i++){
        if( dfs(i) )
            return true;
    }
    return false;
}

int main(){
    int nodes, edges,x,y;
    cin >> nodes >> edges;
    memset(st , false , sizeof(st));
    for(int i = 0; i < edges; i++){
        cin >> x >> y;
        v[x].push_back(y);
    }
   if( cyclic(nodes)) cout << "cycle exist";
   else cout << "cycle doesn't exist";


}
