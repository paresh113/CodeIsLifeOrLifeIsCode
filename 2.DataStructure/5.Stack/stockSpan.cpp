#include<bits/stdc++.h>
using namespace std;
vector < int > v;
stack < int > s,temp;

void stockSpan(int a[], int sz){

    for( int i = 0; i < sz; i++){
     int c = 1;
     if(s.size() == 0){
        v.push_back(1);
     }
     else if(s.size() > 0 && s.top() <= a[i]){
        while(s.size() > 0 && s.top() <= a[i]){
            temp.push(s.top());
            s.pop();
            c++;
        }
        v.push_back(c);
     }
     else
        v.push_back(1);
    if(temp.size() > 0){
        while(temp.size() > 0){
            s.push(temp.top());
            temp.pop();
        }
    }
    s.push(a[i]);
    }
}

int main(){

    int n,a[10];
    cin >> n;
    for( int i = 0; i < n; i++){
        cin >> a[i];
    }
    stockSpan(a,n);
    vector < int > :: iterator it;
    for( it = v.begin(); it != v.end(); it++)
        cout << *it << " ";
}
