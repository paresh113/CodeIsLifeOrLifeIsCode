#include<bits/stdc++.h>
using namespace std;

vector< int > v[10];
int vis[100] = {0};

void topoSort(int i, stack<int> &s){
      vis[i] = 1;
      //st.push(i);
     // cout << "dukse ";
      int p;
      for(int j = 0; j < v[i].size(); j++){
            p = v[i][j];
           // cout << "dukse 2 ";
            if(vis[v[i][j]] == 0)
            {
               // vis[v[i][j]] = 1;
                topoSort(p,s);
            }
      }
                s.push(i);
       // cout <<"st.top = "<< st.top() << endl;
 }

int main(){
    int n,e,x,y;
    stack < int > s;
    cin >>  n >> e;
    for( int i = 0; i < e; i++){
        cin >> x >> y;
        v[x].push_back(y); /// graph must be directed
    }
    for( int i = 0; i < n; i++){
            //cout << "dukse 0";
            if(vis[i] == 0)
                topoSort(i,s);
    }

    while(!s.empty()){

        cout << s.top() << endl;
        s.pop();
    }
}
