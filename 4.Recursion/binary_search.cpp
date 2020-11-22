#include<bits/stdc++.h>
using namespace std;

int func(int a[],int s,int e,int key){
     s = a[0];
     e = a[e-1];
     int mid = s + (e-s)/2;
     if(s > e){ cout << "not found"; return 0;}
     if(key == a[mid])
        return mid;
     if(key > a[mid]){
        s = mid + 1;
        func(a,s,e,key);
     }
     else{
        e = mid - 1;
        func(a,s,e,key);
     }
}

int main(){
    int n,a[1000];
    cin >> n;
    for(int i = 0; i <n; i++){
        cin >> a[i];
    }
    cout << func(a,0,n,7);
}
