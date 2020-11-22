#include<bits/stdc++.h>
using namespace std;

typedef pair < int,int> pii;
vector < pii > v[20];

int vis[100];
int t1 = 0, t2 = 0;
int dfs(int s,int mx){

    vis[s] = 1;
    int ans;
     for(pii child : v[s]){
        if(!vis[child.first]){
            t1 += child.second;
            cout << t1 << " ";
            mx = max(t1,mx);
            ans = mx;
            cout << "ans= "<< ans << " ";
            dfs(child.first, mx);
        }
           // ans = mx;
            t2 += child.second;
             mx = max(t2,ans);

     }
     t1 =0; t2= 0;
     return mx;
}


int main(){
    int n,e , x,y,w;
    memset(vis, 0 , sizeof(vis));
    cin >> n >> e;
    for(int i = 0; i < e; i++){
        cin >> x >> y >> w;
        v[x].push_back(pii(y,w));
        v[y].push_back(pii(x,w));
    }
    for(int i = 1 ; i <= n; i++){
        int mx = INT_MIN;
        int ans = dfs(1,mx);

//        if(ans > mx)
//            mx = ans;
        cout << ans << " ";

    }


}
