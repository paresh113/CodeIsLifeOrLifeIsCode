#include<bits/stdc++.h>
using namespace std;

void rec_(int i ,int n, int a[]){
    if(i < (n-1/2)){
        cout << a[i] << " "<<a[n-1]<<endl;
        rec_(i+1,n-1,a);

    }

}

int main(){
     int n;
     cin >> n;
     int a[n+1];
     for(int i = 0; i < n; i++)
        cin >> a[i];
     rec_(0,n,a);
}
