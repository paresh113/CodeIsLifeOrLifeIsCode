#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; /// To find nth magic number
    cin >> n;
    int pow = 1;
    int ans = 0;
    while(n){
        pow = pow*5;
        if(n & 1){
            ans += pow;
        }
        n>>=1;   /// n = n/2
    }
    cout << ans <<endl;
    return 0;
}
