#include<bits/stdc++.h>
using namespace std;

vector < int > v[20];
int vis[200];
    int x;

void dfs(int s,int mx,int cnt){
    vis[s] = 1;

    cnt++;
    for(int child = 0; child < v[s].size();child++){
            int t = v[s][child];
        if(!vis[t]){
            if(cnt > mx ){
                mx = cnt;
                x = t;
            }
            dfs(t,mx,cnt);
        }
    }
   // return x;
}



int main(){
    int n,e,x,y;
    memset(vis,0,sizeof(vis));
    cin >> n >> e;
    for(int i = 0; i <e; i++){
        cin >> x >> y;
        v[x].push_back(y);
        v[y].push_back(x);
    }
    int mx = INT_MIN;
    int cnt = 0;
    dfs(1,mx,cnt);
    cout << x << " = count"<< endl;
   // cout << "t= "<< t << endl;
     //cout << "dfs = "<<dfs(t,mx,cnt)<< endl;

}
