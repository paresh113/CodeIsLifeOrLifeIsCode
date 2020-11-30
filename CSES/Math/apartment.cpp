#include<bits/stdc++.h>
using namespace std;

// erasing from set
#include <iostream>
#include <set>

int a[300005],b[300005];
int main ()
{
  int n,m,k; cin >> n >> m >>k;
  for(int i = 0; i <n; i++){
    cin >> a[i];
  }
  for(int i = 0; i < m; i++){
    cin >> b[i];

  }

    sort(a,a+n,greater<int>()); sort(b,b+m,greater<int>());
    int res = 0;
    for (int i = 0, j = 0; i < n && j < m;)
    {

        //cout <<abs(a[i] - b[j])<< endl;
        if (abs(a[i] - b[j]) <= k){

                i++;
                j++;
                res++;
        }
        else if (a[i] > b[j]+k) i++;
        else j++;
    }
    cout << res << '\n';
}
