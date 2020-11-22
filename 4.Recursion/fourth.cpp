#include<iostream>
using namespace std;

void series(int n){
    if(n < 1) return;
    if(n==2){
        cout << "1+x";
    }
    else{
        series(n-1);
        cout << "+x^"<<(n-1);

    }
}

int main(){
     int n;
     cin >>n;
     series(n);
}
