#include<bits/stdc++.h>
using namespace std;

int vis[100];

void bfs(int s, int x){

    queue< int > q;
    q.push(s);
    while(!q.empty()){
    int i = q.front();
    if(i > x) return;
    cout << i << " ";
    q.pop();
    int ld = i%10; /// last digit
    if(ld == 0)
        q.push((i*10) + (ld + 1));
    else if(ld == 9)
        q.push((i*10) + (ld - 1));
    else{
        q.push((i*10) + (ld + 1));
        q.push((i*10) + (ld - 1));
     }
   }
}
int main(){

    int x; cin >> x;
    memset(vis, 0, sizeof(vis));
    cout << "0 " ;
    for(int i = 1; i <=9 && i <= x; i++){
        bfs(i , x);
    }

}
