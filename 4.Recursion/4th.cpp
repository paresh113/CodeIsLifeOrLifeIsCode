#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void poly(int i, int n){

    if(i < n){
        if(i == 0)
            cout << "1";
        else
        {
            cout << " + x";
            if(i > 1) cout <<"^"<< i;
        }
            poly(i+1,n);
    }

}

int main(){
    int n;
    cin >> n;
    poly(0,n);
}
