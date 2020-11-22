#include<bits/stdc++.h>
using namespace std;
   vector < int > v[20];
int vis[100];
int col[100];
bool BipertiteCheck(int s, int color){
    vis[s] = 1;
    col[s] = color;

    for(int child : v[s]){
        if(!vis[child]){
            if(BipertiteCheck(child, color^1) == false){
                return false;
            }
        }
        else{
            if(col[child] == col[s])
                return false;
        }
    }
     return true;
}

int main(){
   int n,e,x,y;
   cin >> n >> e;
   for(int i = 0; i < e; i++){
    cin >> x >> y;
    v[x].push_back(y);
    v[y].push_back(x);
   }
   cout << BipertiteCheck(1,1);

}
