#include<bits/stdc++.h>
using namespace std;

typedef pair < int, int > pi;
vector < pi > v[100];

#define INT_MAX 65657
int key[300] ;
int par[3000] ;;
bool inMST[3000] ;

/// By default a max heap is created ordered
/// by first element of pair.


void prim(int s){
     priority_queue < pi, vector<pi>, greater<pi> > pq;       ///  We can create a min heap by passing adding two
                                                              /// parameters, vector and greater().
     pq.push(pi(0,s));
     key[s] = 0;
   //  int f1 = pq.top().first;

     while(!pq.empty()){
          int f2 = pq.top().second;    /// source
          pq.pop();
          //cout << f2 << endl;
          for(int i = 0; i < v[f2].size(); i++){
                int u1 = v[f2][i].first;
                int u2 = v[f2][i].second;   /// cost
               // cout << inMST[u1] << " "<< key[u1]<<endl;

                if(inMST[u1] == false && key[u1] > u2){
                        //cout << "dukse";
                    key[u1] = u2;
                    pq.push(pi(key[u1],u1));
                    par[u1] = f2;
                    inMST[f2] = true;
                }
          }
       }


}
int main(){
    int n,e,x,y,w;
    cin >> n >> e; /// nodes and edges
    for(int i = 0; i < e; i++){
        cin >> x >> y >> w;
        v[x].push_back(pi(y,w));
        v[y].push_back(pi(x,w)); /// bidirectional
    }
    memset(inMST,false,sizeof(inMST));
    memset(par,-1,sizeof(par));
    memset(key,INT_MAX,sizeof(key));
//    for(int i = 0; i<3000;i++){
//        key[i] = 99999;
//    }
    //cout << key[0]<< endl;
    prim(0);
    for( int i = 0; i < n; i++){
        cout << par[i] << "= "<< i  <<" "<< key[i] << endl;
    }
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
5 4 10
5 6 2
6 7 1
6 8 6
7 8 7

*/
