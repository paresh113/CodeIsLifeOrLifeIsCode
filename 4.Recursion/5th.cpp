#include<bits/stdc++.h>
using namespace std;

int poly_res(int i, int n, int x){
    int sum = 0;
    if(n == 0)
        return 1;
    if(i < n){
        sum += pow(x,i);
        return sum + poly_res(i+1, n, x);
    }
    return 0;
}

int main(){
    int x,n;
    cin >> x >> n;
    cout << poly_res(0,n,x);
}
