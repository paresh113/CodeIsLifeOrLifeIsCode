
/// Theory : https://www.youtube.com/watch?v=ID00PMy0-vE&t=674s
/// codeHelp: geekforgeeks
#include<bits/stdc++.h>
using namespace std;

int par[100];
int rnk[100];
void makeset(int n){

    for(int i = 0; i < n; i++){
        par[i] = i;
    }
}

int find(int n){
     if(par[n] == n) return n;

     return find(par[n]);

}

void Union(int x, int y){
    int xs = find(x);
    int ys = find(y);

    if(xs == ys) return; /// both are in the same set

    if(rnk[xs] < rnk[ys]){
        par[xs] = ys;    /// jar rank beshi tare representive banai disi
    }
    else if(rnk[xs] > rnk[ys]){
        par[ys] = xs;
    }
    else{
        par[ys] = xs;
        rnk[xs] += 1;
    }
}
int main(){
    int n; cin >> n;

    memset(rnk,0,sizeof(rnk));
    makeset(n);
    Union(0,2);
    Union(4,2);
    Union(3,1);
    //Union(0,2);
   if( find(1) == find(0)) cout << "yes";
   else cout << "no";

}
