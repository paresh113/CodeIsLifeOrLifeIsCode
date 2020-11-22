
#include<bits/stdc++.h>
using namespace std;

int vis[100];
vector < int > v[100];

/// my approach (I don't know it is right or wrong )
int main() {
    int n,e; cin >> n >> e;
    memset(vis, 0 , sizeof(vis));
    for(int i =0; i < e; i++){
        int x,y; cin >> x >> y;
        v[x].push_back(y);
        vis[y] = 1;
    }
    for(int i = 0; i < n; i++){
        if(vis[i] == 0){
            cout << "Mother vertex = "<<i << endl;
            break;
        }
    }

}

/*
n  e
7 8
0 1
0 2
1 3
4 1
6 4
5 6
5 2
6 0

*/
