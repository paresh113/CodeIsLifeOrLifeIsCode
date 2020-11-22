#include<bits/stdc++.h>
#include<iostream>
using namespace std;



int main(){
     int a[20],n;
     cin >> n;
     for(int i = 0; i < n; i++){
        cin >> a[i];
     }
     int temp = a[0];
     for(int i = 1 ; i< n; i++){
        a[i] = max(a[i-1]+a[i],a[i]);
     }
     for(int i = 0; i <n; i++){
        cout << a[i] << " ";
     }

}
