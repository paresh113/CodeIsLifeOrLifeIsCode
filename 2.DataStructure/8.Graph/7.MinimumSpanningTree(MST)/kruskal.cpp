/// codeHelp: geeksforgeeks

#include<bits/stdc++.h>
using namespace std;

typedef pair<int,int> pi;
vector<pair <int ,pi> > vc;
int par[300];
int rnk[300];

void makeset(int n){
    for(int i = 0; i < n; i++){
        par[i] = i;
        rnk[i] = 0;
    }
}
int find(int x){
     if(par[x]== x) return x;
     return find(par[x]);
}
void Merge(int p,int q){     /// Union er replacement

     int x = find(p);
     int y = find(q);

     if(rnk[x]> rnk[y]){
        par[y] = x;
     }
     else if(rnk[x] < rnk[y]){
        par[x] = y;
     }
     else{
        par[y] = x;
        rnk[x] += 1;
     }

}
int  kruskal(){
     int sum_wt = 0;
     sort(vc.begin(),vc.end()); /// by deafult pair er first element er opr base kore sort hobe
     for(int i = 0; i < vc.size(); i++){
        int u = vc[i].second.first;
        int v = vc[i].second.second;

        int set_u = find(u);
        int set_v = find(v);
                        /// when set_u == set_v then they are in the same set.
                        /// if we add them then cycle created.
        if(set_u != set_v){
            cout << u << " - "<< v<< endl;
            sum_wt += vc[i].first;

            Merge(set_u, set_v);
        }
     }
     return sum_wt;
}
int main(){
    int n,e,w,x,y;
    cin >> n >> e;
    for( int i = 0; i < e; i++){
        cin >> x >> y >> w;
        vc.push_back({w, {x,y}});     /// pair< int , pair<int,int> >
    }
    makeset(n);
    int ans = kruskal();
    cout << ans << endl;
}

/**
9 14
0 1 4
0 7 8
1 2 8
1 7 11
2 3 7
2 8 2
2 5 4
3 4 9
3 5 14
4 5 10
5 6 2
6 7 1
6 8 6
7 8 7
*/
