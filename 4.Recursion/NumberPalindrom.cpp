#include<bits/stdc++.h>
using namespace std;


    int ans = 0;
int pal(int n,int i,int ans){
    if(n == 0) return 0;
    int rem = n % 10;
    ans = ans + rem*(pow(10,i));
    return pal(n/2,i + 1,ans);
}

int main(){

    int n ; cin >> n;
    int p = pal(n,0,0);
  cout << p << endl;
    if(p == n) cout << "palindrome";
    else cout << "not palindrom";
}
