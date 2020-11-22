
#include<bits/stdc++.h>
using namespace std;

vector < int > v;
stack < int > s;

void ngr(int a[], int sz){


    for( int i = 0; i < sz; i++){

        if(s.size() == 0){
            v.push_back(-1);
         }
        else if(s.size() > 0 && s.top() <= a[i]){
            while(s.size() > 0 && s.top() <= a[i]){
                s.pop();
            }
            if(s.size() == 0){
                v.push_back(-1);
            }
            else{
                 v.push_back(s.top());
            }
        }
        else
             v.push_back(s.top());

       s.push(a[i]);
    }
}
int main(){
    int n, a[10];
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    ngr(a,n);
    vector< int > :: iterator it;
   // reverse(v.begin(),v.end());
    for(it = v.begin();it != v.end(); it++)
        cout << *it << " ";
}
