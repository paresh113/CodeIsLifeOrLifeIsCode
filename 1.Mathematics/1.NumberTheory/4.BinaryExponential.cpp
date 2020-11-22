#include<bits/stdc++.h>
using namespace std;

/// (2^13)
int power(int a,int b){

    int res = 1;
    while(b){
        if(b%2){
            res *= a;
            b--;
        }
        else{
            a = a*a;
            b = b/2;
        }
    }
    return res;
}

int main(){

    int a,b,ans;
    cin >> a >> b;
    ans = power(a,b);
    cout << ans ;
}

