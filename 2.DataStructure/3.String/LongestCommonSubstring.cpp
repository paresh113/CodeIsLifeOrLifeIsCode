#include<bits/stdc++.h>
using namespace std;

/// totally from aditya verma's video( that's cool )

int a[100][100];

int res = 0;
int lcs( string x,string y,int m,int n){
/// first row and first column are filled with a value = 0
    for( int i =0; i < m + 1; i++){
        for(int j =0; j <n + 1; j++){
            if(i == 0 || j == 0){
                a[i][j] = 0;
            }
        }
    }
    /// as we filled 1st row and column so we start from i and j both are 1
    for (int  i = 1; i < m + 1; i++){
        for(int j = 1; j < n +1; j++){
            if(x[i - 1] == y[j - 1] ){
                ///return 1+ lcs(x,y,m-1,n-1);
                 a[i][j] = (1 + a[i-1][j-1]);
                 res = max(res, a[i][j]);
            }
            else{
              /// return max(lcs(x,y,m,n-1), lcs(x,y,m-1,n));
              /// a[i][j] =  max(a[i][j-1],a[i-1][j]);
              a[i][j] = 0;
            }
        }
    }
    return res;   /// As answer stored in a[m][n]
}

int main(){
    string s1, s2;
    cin >> s1 >> s2;
    int m =s1.size();
    int n = s2.size();

    int ans = lcs(s1,s2,m,n);
    cout << ans << endl;

}
