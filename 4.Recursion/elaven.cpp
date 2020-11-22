#include<bits/stdc++.h>
using namespace std;
int find_max(int a[], int n, int i,int mx){

     if(i == n-1) return mx;
     else if(a[i]> mx) mx = a[i];
     find_max(a,n,i+1,mx);
}
int main(){
     int n,a[100];
     cin >> n;
     for(int i = 0; i <n; i++){
        cin >> a[i];
     }
     cout << find_max(a,n,0,a[0]);
}
