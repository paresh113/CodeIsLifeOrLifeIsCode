#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    int a[n+1];
    for(int i =0; i <n; i++){
        cin >> a[i];
    }
    sort(a,a+n);
    int mx = 0,cnt = 0;
     for(int i = 0; i < n-1; i++){
        if(a[i+1]-a[i] == 1){
            cnt++;
            if(cnt > mx)
                mx = cnt;
        }
        else
        {
            cnt = 0;
        }
    }
    cnt <= 0 ? cout << cnt : cout << mx + 1;
}
