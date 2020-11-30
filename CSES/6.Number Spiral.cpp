#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll t,x,ans,y;cin >> t;
    while(t--){
        cin >> x >> y;
        if(x > y){
             if(x % 2)
                ans = (x-1)*(x-1) + y;
             else
                ans = (x)*(x) -(y - 1);
        }
        else{
             if(y %2){
                ans = (y*y) - (x - 1);
             }
             else{
                ans = (y-1)*(y-1) + x;
             }
        }
    cout << ans << endl;
    }
}
