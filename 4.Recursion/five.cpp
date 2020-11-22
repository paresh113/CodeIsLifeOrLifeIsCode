#include<bits/stdc++.h>
using namespace std;

int eva_poly(int x,int n,int i){

  int sum = 0;
    if( i < n){
       sum += pow(x,i)+ eva_poly(x,n,i+1);

    }
    return sum;
}

int main(){
    int x,n;
    cin >> x >> n;

    cout << eva_poly(x,n,0);
}
