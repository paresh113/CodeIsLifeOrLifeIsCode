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
    delete(left);
    delete(right);
}

int main()
{
    ll max_len = 3000000;
    cout << "How many random numbers to be generated? :";
    ll n; //cin >> n;
    while(cin>>n){
    switch(n){
   case 10:
        n = 10;
        break;
   case 1000:
        n = 1000;
        break;
   case 10000:
        n = 10000;
        break;
    }
    ll a[n+1];
    srand((unsigned)time(0));

    for(ll i =0; i <n; i++){
        a[i] = (rand()% n) + 1;    /// each element in the array of range (1 to n)
    }
    cout << "sorted array: ";
    for(ll i = 0; i < n; i++)
        cout << a[i]<< " ";
        cout << endl;
    auto t_start = std::chrono::high_resolution_clock::now();
    mergesort(a,n);
    auto t_end = std::chrono::high_resolution_clock::now();
    auto dur = std::chrono::duration<double, std::milli>(t_end-t_start).count();
    cout << dur/1000000 << endl;
    }

}
