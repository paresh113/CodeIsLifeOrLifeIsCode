#include<bits/stdc++.h>
using namespace std;
#define lli long long int
lli power(lli a,lli b,lli mod){
    lli res = 1;
    while(b){
        if(b%2){
            res = (res * a)% mod;
            b--;
        }
        else{
            a = (a* a)% mod;
            b = (b/2);
        }
    }
    return res;
}

int main()
{

    lli n,ans; cin >> n;
   ans = power(1378, n,10);
   cout << ans << endl;

    return 0;
}
