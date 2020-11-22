#include<bits/stdc++.h>
using namespace std;

int func(int a[],int s,int i){
    if(s == 1) return 0;

    for(int i = 0; i < s-1; i++){
        if(a[i]> a[i+1]){
            swap(a[i],a[i+1]);
        }
    }
    func(a,s-1,i+1);
}

int main(){
    int n,a[20];
    cin >> n;
    for(int i = 0; i <n; i++){
        cin >> a[i];
    }
    func(a,n,0);
    for(int i = 0; i < n; i++)
        cout << a[i] <<" ";
}
