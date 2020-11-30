#include<bits/stdc++.h>
using namespace std;

#define ll long long

ll a[300005];
vector < ll > v;
stack < pair<ll,ll> > s;

void ngr(ll a[], ll sz){


    for( ll i = 0; i < sz; i++){

        if(s.size() == 0){
            v.push_back(0);
         }
        else if(s.size() > 0 && s.top().first >= a[i]){
            while(s.size() > 0 && s.top().first >= a[i]){
                s.pop();
            }
            if(s.size() == 0){
                v.push_back(0);
            }
            else{
                 v.push_back(s.top().second);
            }
        }
        else
             v.push_back(s.top().second);

       s.push({a[i],i+1});
    }
}
int main(){
    ll n;
    cin >> n;
    for(ll i = 0; i < n; i++){
        cin >> a[i];
    }
    ngr(a,n);
    vector< ll > :: iterator it;
   // reverse(v.begin(),v.end());
    for(it = v.begin();it != v.end(); it++)
        cout << *it << " ";
}
