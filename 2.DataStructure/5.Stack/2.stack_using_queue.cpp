#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
        queue < int > q1,q2,q3;
        int n,a[100];
        cin >> n;
        for(int i = 0; i < n; i++){
            cin >> a[i];
            q1.push(a[i]);
           // cout << q1.front()<< " ";
           //q2.push(a[i]);
           //q1.pop();
        }
        while(q3.size()!= n){
            while(q1.size()> 1){
                q2.push(q1.front());
              //  cout << q1.back();
                q1.pop();
            }
            if(q1.size()){
            q3.push(q1.front());
            q1.pop();
            }
            //cout << q1.front();
             while(q2.size()> 1){
                q1.push(q2.front());
              //  cout << q1.back();
                q2.pop();
            }
            if(q2.size()){
                q3.push(q2.front());
                q2.pop();
            }

        }
        while(!q3.empty()){
            cout << q3.front() << " ";
            q3.pop();
        }

}

