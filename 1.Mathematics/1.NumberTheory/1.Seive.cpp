#include<bits/stdc++.h>
using namespace std;
int primes[1000];
int save[100];

int main(){
    int n; cin >> n;
    memset(primes, 1,sizeof(primes));
    int sr = sqrt(n);
    for(int i = 2; i <= n; i++){
        if(primes[i]){
            for(int j = 2*i; j <= n; j+=i){
                primes[j] = 0;
            }
        }
    }
    int k = 0;
    for(int i = 2; i <= n; i++){
        if(primes[i]){
            save[k] = i;
            cout << save[k++] << " ";
            //k++;
        }

    }
}

