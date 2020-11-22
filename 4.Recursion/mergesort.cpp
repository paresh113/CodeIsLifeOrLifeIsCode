#include<bits/stdc++.h>
using namespace std;
#define ll long long
void Merge(ll l[],ll szl,ll r[],ll szr ,ll a[]){
   // ll szr = sizeof(r)/sizeof(r[0]);
   // ll szl = sizeof(l)/sizeof(l[0]);

    ll i = 0,j = 0,k =0;
    while(i < szl && j < szr){
        if(l[i] <= r[j]){
            a[k] = l[i];
            i++;
        }
        else{
            a[k] = r[j];
            j++;
        }
        k++;
     }
     while(j < szr){
           a[k] = r[j];
           k++; j++;
     }
     while(i < szl ){
        a[k] = l[i];
        i++; k++;
     }
}

void mergesort(ll a[],ll s){
    if(s < 2) return;
    ll mid = s/2;
   // ll left[20],right[20];
    ll *left = new ll[10];
    ll *right = new ll[10];

    for( ll i = 0; i < mid; i++)
        left[i] = a[i];
       // cout << "ki obstha !";
    for( ll j = mid; j < s ; j++)
        right[j-mid] = a[j];
       // ll p = sizeof(left)/sizeof(left[0]);

    mergesort(left,mid);
    mergesort(right,s-mid);
    Merge(left,mid,right,s-mid,a);
    free(left);
    free(right);
}

int main(){
    ll n,a[20];
    cin >> n;
    for(ll i = 0; i < n; i++)
        cin >> a[i];
    mergesort(a,n);
    for(ll i = 0; i < n; i++)
        cout << a[i] << " ";

}
