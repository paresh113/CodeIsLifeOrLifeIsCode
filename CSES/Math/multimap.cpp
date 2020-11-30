#include <bits/stdc++.h>
using namespace std;

// function for min operation
int minOperation (int arr[], int n)
{
    // Insert all elements in hash.
    unordered_map<int, int> hash;
    for (int i=0; i<n; i++)
        hash[arr[i]]++;

    // find the max frequency
    int max_count = 0;
    for (auto i : hash)
        if (max_count < i.second)
            max_count = i.second;

    // return result
    return (n - max_count);


}

int main(){
    int n,k,a[200005],t;cin >> t;
    while(t--){
            cin >> n>>k;
    for(int i = 0; i <n; i++){
        cin >> a[i];
    }
        int par = 0;
     for(int i = 0; i <n; i++){
        if( a[i] == 1 && a[i + 1] != 1){
            par++;
        }
    }
        if(a[n-1] == 1)par++;
        cout << par << endl;
        int m = minOperation(a,n);
        int t = n -m;
        int res;
        if(t%k == 0) res =(t/k);
        else res = (t/k) +1;

    cout << max(par,res)<< endl;
    }
}
