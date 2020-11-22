
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

vector< int > v[20];
int vis[1000]={0};
int cnt = 0,res = 0;
int dfs(int s, int color[],int n,int m){
     vis[s] = 1;

    // cout << s << " ";
    int res = 0;
           // if(color[i] == color[s]) cnt++;


           if(color[s])
              cnt++;
           else
              cnt = 0;
          if(cnt > m){ return 0;}

        if(v[s].size() ==0 && color[s] == 0)  res++;
       for(int i = 0; i < v[s].size();i++){
            if(!vis[v[s][i]] ){
                int t = v[s][i];
                dfs(t,color,n,m);
            }
     }
     return res;
}

int main(){
     int n,m,e,x,y,node,edge, color[20001];
     cin >> n >> m;
//     int t; vector<int> color;
//     for(int i = 1; i <= n; i++){
//        cin >> t;
//        color.push_back(t);
//     }
     for ( int i = 1; i <= n; i++)
          cin >> color[i];


     for(int i = 1; i <n; i++){
        cin >> x >> y;
        v[x].push_back(y);
        v[y].push_back(x);
     }
    // int res = 0;
     cout << dfs(1, color,n,m);
//     for(int i = 1; i <=n; i++){
//        if(!vis[i]){
//            dfs(i, color,m);
//        }
//     }
}
