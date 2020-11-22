#include<bits/stdc++.h>
using namespace std;

vector < int > v[20];
map < int, int > mp;
int vis[1000];
queue< int > q;
bool bfs(int s){
     vis[s] = 1;
     q.push(s);

     while(!q.empty()){
            int f = q.front();
            q.pop();
            for(int  child : v[f]){
                if(!vis[child]){
                    vis[child] = 1;
                     mp[child] = f;
                    q.push(child);
                }
                else{
                   if(mp[f] != child ){
                         return false;
                  }
               }
            }

     }
     return true;


}


int main(){
   int n,e,x,y;
   cin >> n >> e;
   memset(vis, 0, sizeof(vis));
   for(int i = 0; i < e; i++){
    cin >> x >> y;
    v[x].push_back(y);
    v[y].push_back(x);
   }
   mp[1] = 0;
   if(!bfs(1)){cout << "cycle exsist";}
   else {cout << "cycle not exist";}
}
