#include <iostream>
#include<bits/stdc++.h>
using namespace std;


vector< pair<int,int> >v[20];
int vis[1000];
int mx;
void dfs(int s, int prev){
     vis[s] = 1;
     int cur = 0;

     for( pair< int, int > child : v[s]){
         if(!vis[child.first]){
             cur = prev + child.second;
             dfs(child.first, cur);

             if(cur > mx)
               mx = cur;

            cur = 0;
         }
     }
}

int main() {
	int n,e,x,y,w;
	memset(vis, 0, sizeof(vis));
	cin >> n >> e;

	for( int i = 0; i < e; i++){
	    cin >> x >> y >> w;
	     v[x].push_back(make_pair(y,w));
	     v[y].push_back(make_pair(x,w));
	}

	for(int i = 1; i <= n; i++){
	    dfs(i,0);
	    memset(vis, 0, sizeof(vis));
	}
	cout << mx << endl;


	return 0;
}
