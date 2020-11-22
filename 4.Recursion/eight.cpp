#include<bits/stdc++.h>
using namespace std;

int prime(int i, int n,int srt){
    if(n < 2) return 0;
    if(i > srt) return 1;
    if(n%i==0) return 0;
    return prime(i+1, n,srt);

}
int main(){
       int n;
       cin >> n;
       int p = sqrt(n);
       cout << p <<endl;
       int ck =  prime(2,n,p);
       cout << ck << endl;
       if(ck==1)
        cout <<"prime";
       else
         cout<< "not prime";
}
