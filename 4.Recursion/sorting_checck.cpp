#include<bits/stdc++.h>
using namespace std;
bool  ck_sort(int a[], int s,int i){

     if(i == s-1) return true;
     if(a[i] > a[i+1]) return false;
     ck_sort(a,s,i+1);

}

int main(){
    int n,a[20];
    cin >> n;
    for(int i = 0; i <n; i++){
        cin >> a[i];
    }
    bool ans = ck_sort(a,n,0);
    cout << ans << endl;
}
