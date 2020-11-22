#include<bits/stdc++.h>
using namespace std;

bool pythgoren(int a[], int n){
    int x,y,z;

    for(int i = 0; i < n-2; i++){
        for(int j = i+1; j < n-1; j++){
            for(int k =j+1; k < n; k++){
                x = a[i] * a[i];
                cout << "x=" << x <<endl;
                y = a[j] * a[j];
                cout << "y=" << y <<endl;
                z = a[k] * a[k];
                cout << "z=" << z <<endl;
            if( (x == y + z) || (y == x + z) || (z == x+y))
                return true;

            }
        }
    }
    return false;
}

int main(){
    int a[100],n;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
   // int sz = sizeof(a)/sizeof(a[0]);
    pythgoren(a, n)? cout << "yes" : cout << "no";


}
