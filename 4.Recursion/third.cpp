#include<bits/stdc++.h>
using namespace std;

void rem_odd(int a[], int sz,int i){
    if(i==sz) return;
        if(a[i]%2 == 0){
            cout << a[i] <<" ";
        }
        rem_odd(a,sz,i+1);
    }
int main(){

    int a[100],n;
    cin >> n;
    for(int i =0; i < n; i++){
        cin >> a[i];
    }

    rem_odd(a,n,0);

}
