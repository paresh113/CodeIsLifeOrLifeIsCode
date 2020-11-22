#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,n,sum;
    cin >> t;
    while(t){
        cin >> n;
        sum = 0;
        while(n){
            sum += n/5;
            n = n/5;
        }
        cout << sum << endl;
    }
}
