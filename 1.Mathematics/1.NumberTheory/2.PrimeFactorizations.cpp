
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
             //cout << save[k++] << " ";
            k++;
        }

    }
    /// prime factorization
    int factor[100];
    int p = 0;
    int sum = 1;
    for(int i = 0; save[i] <= n; i++){
        if(n % save[i] == 0){
                int cnt = 0;
            while(n % save[i] == 0){
                n /= save[i];
                factor[p] = save[i];
                p++;
                cnt++;

            }
           // cout << cnt << " ";
            sum *= ((pow(save[i],cnt+1) -1)/(save[i]-1)) ;

        }

    }
    cout << sum << endl;

}

