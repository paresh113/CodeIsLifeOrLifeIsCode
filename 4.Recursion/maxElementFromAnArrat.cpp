#include<bits/stdc++.h>
using namespace std;


int findMax(int a[], int n, int i){
    //int mx ;
    if(i == n-1) return a[0];
    if(a[i+1] > a[0]) a[0] = a[i+1];
    findMax(a,n,i+1);
   // return mx;
}

int main(){
    int n; cin >> n;
    int a[ n + 1];
    for(int i = 0; i < n; i++)
        cin >> a[i];
    cout << findMax(a,n,0);
}
