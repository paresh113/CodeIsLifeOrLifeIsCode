#include<bits/stdc++.h>
using namespace std;
vector < int > v[20];
int vis[100];
int InTime[100];
int OutTime[100];
int timer;
map < int , int > mp;
void dfs(int s, int par){
    vis[s] = 1;
    mp[s] = par;
    InTime[s] = OutTime[s] = timer++;

    for(int child : v[s]){

            if (!vis[child]){
                dfs(child, s);

                OutTime[s] = min(OutTime[s], OutTime[child]);
                if(OutTime[child] > InTime[s])
                cout << s << "->"<< child << "is a bridge"<< endl;
             }
            else if( mp[s] != child){

                OutTime[s] = min(InTime[child],OutTime[s]);
             }
    }

}




int main(){

    int n, e, x,y;
    memset(vis, 0 , sizeof(vis));
    cin >> n >> e;
    for(int i = 0; i < e; i++){
        cin >> x >> y;
        v[x].push_back(y);
        v[y].push_back(x);
    }
    for(int i = 0; i < n; i++){
            if(!vis[i])
               dfs(i, - 1);
     }
}
