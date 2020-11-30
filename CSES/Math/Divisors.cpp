
#include<bits/stdc++.h>
using namespace std;
int primes[1000003];
int save[1000003];

void sieve(){
        int sr = sqrt(100005);
        for(int i = 2; i <= sr; i++){
            if(primes[i]){
                for(int j = 2*i; j <= 100005; j+=i){
                    primes[j] = 0;
                }
            }
        }
        int k = 0;
        for(int i = 2; i <= 100005; i++){
            if(primes[i]){
                save[k] = i;
                 //cout << save[k++] << " ";
                k++;
            }

        }

}

int main(){
    memset(primes, 1,sizeof(primes));
    int n,t; cin >> t;
    sieve();
    while(t--){
            cin >> n;
        /// prime factorization
        int factor[100];
        int p = 0;
        int sum = 1;
        for(int i = 0; save[i] <= sqrt(n); i++){
            if(n % save[i] == 0){
                    int cnt = 0;
                while(n % save[i] == 0){
                    n /= save[i];
                    cnt++;

                }
                sum *=(cnt + 1);
               // cout << cnt << " ";
               // sum *= ((pow(save[i],cnt+1) -1)/(save[i]-1)) ;

            }

        }
        if(n > 1) sum *= 2;
        cout << sum << endl;
    }

}


