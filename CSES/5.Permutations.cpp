#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll n; cin >>n;
    if(n == 1) cout << "1";
    else if(n == 2 || n == 3)cout << "NO SOLUTION";
    else if(n%2 == 0){
        for(int i = n-2; i >= 2; i-= 2){
            cout << i << " ";
        }
        cout << n << " ";
        for(int i = 1; i < n; i+= 2){
            cout << i << " ";

        }
    }
    else if(n%2){
        for(int i = n-1; i >= 2; i-= 2){
            cout << i << " ";
        }
        cout << n << " ";
        for(int i = n-2; i >= 1; i-= 2){
            cout << i << " ";

        }
    }

}
