#include<bits/stdc++.h>
using namespace std;
int func(int a[],int s){
    int sum = 0;
    if(s < 1) return 0;
    //cout << a[s-1] << " ";
    sum += a[s-1];

    return sum + func(a,s-1);
}
int main(){
    int n,a[200];
    cin >> n;
    for(int i =0; i < n; i++)
        cin >> a[i];
    cout << func(a,n);
}
