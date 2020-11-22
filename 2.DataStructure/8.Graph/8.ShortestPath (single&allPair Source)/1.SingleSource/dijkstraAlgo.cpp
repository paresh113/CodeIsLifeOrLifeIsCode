#include<bits/stdc++.h>
using namespace std;


const int MAX = 1024;
const int INF = 0x3f3f3f3f;
int dis[MAX];

typedef pair< int, int > pi;
vector< pi > g[200];


void dijkstra(int st){
     priority_queue< pi, vector<pi>,greater<pi> > pq;
     int w,c,p,q;
     memset(dis,INF,sizeof(dis));
     pq.push(pi(0,st));
     dis[st] = 0;
     while(!pq.empty()){
        p = pq.top().second; /// node
        c = pq.top().first;   /// cost
        pq.pop();
        if(dis[p] < c) continue;

        for(int i = 0; i < g[p].size();i++){
            q = g[p][i].first; /// node
            w = g[p][i].second;  /// cost

            if(dis[q] > dis[p] + w){
                dis[q] = dis[p] + w;
                pq.push(pi(dis[q],q));
            }
        }
     }
}
int main(){

    int n,e,w,u,v;
    cin >> n >> e;
    for(int i = 0; i < e; i++){
        cin >> u >> v >> w;
        g[u].push_back(pi(v,w));
        /// for bidirectional
        g[v].push_back(pi(u,w));
    }
    int st;
    cin >> st;
    dijkstra(st);
    cout << "distance from 0 : "<<endl;
    for( int  i = 0; i < n; i++){
        if(i == st) cout <<"to "<st<< "= 0"<< endl;
        else
            cout << "to " << i <<"= "<< dis[i] << endl;
    }

}
