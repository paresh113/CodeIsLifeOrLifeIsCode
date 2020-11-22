#include<bits/stdc++.h>
using namespace std;
map < char, vector<char>> mp;

void bfs(char ch){
    queue< char > q;
    map<char, bool> vis;
    q.push(ch);
    vis[ch] = true;

    while(!q.empty()){
        char f = q.front();
        q.pop();
        cout << f <<", ";
        for(char adj : mp[f]){
            if(!vis[adj]){
                q.push(adj);
                vis[adj] = true;
            }
        }
    }
}

int main(){
    char x,y;
    int n,e;

    cin >> n >> e;

    for(int i= 0; i < e; i++){
        cin >> x >> y;
        mp[x].push_back(y);
        mp[y].push_back(x);
    }
    bfs('a');

}
