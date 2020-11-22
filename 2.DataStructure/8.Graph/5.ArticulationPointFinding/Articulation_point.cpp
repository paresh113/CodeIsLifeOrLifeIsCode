
#include<bits/stdc++.h>
using namespace std;
vector < int > v[20];
int vis[100];
int InTime[100];
int OutTime[100];
int timer;

int par[100] = {-1};
int ap[100] = {0};

void dfs(int s, int p){
     vis[s] = 1;
     par[s] = p;
     InTime[s] = OutTime[s] = timer++;
     int children = 0;
     for(int child : v[s]){
            if (!vis[child]){
                children++;
                dfs(child, s);

                OutTime[s] = min(OutTime[s], OutTime[child]);

                if(OutTime[child] >= InTime[s] && par[s] != -1)
                        ap[s] = 1;
                if(par[s] == -1 && children > 1){
                        ap[s] = 1;
                }

               // cout << s << "->"<< child << "  is a bridge"<< endl;
             }
            else if( par[s] != child){

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
    for(int i = 1; i <= n; i++){
          dfs(i, -1);
     }
    for (int i = 1; i <= n; i++){
        if(ap[i] == 1)
            cout << i << " ";
    }
}
