#include<bits/stdc++.h>
using namespace std;
bool func(int n, int i){
    if(i > n/2) return true;
    if(n%i == 0) return false;
    func(n, i+1);
}
int main(){
    int n,i;
    cin >> n;
    bool ans = func(n,2);
    if(ans == true) cout << "prime";
    else cout << "not prime";
}
