#include<bits/stdc++.h>
using namespace std;

void odd(int i,int n, int a[]){
    if(i == n) return;
    if(a[i]%2 == 0){
        cout<< a[i]<< " ";
        odd(i+1,n,a);
    }
    else
        odd(i+1,n,a);
}

int main(){
    int n; cin >> n;
    int a[n+1];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    odd(0,n,a);

}
