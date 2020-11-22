#include<bits/stdc++.h>
using namespace std;

int first,second = INT_MIN;
int SMax(int a[],int n,int i){
    if( i == n) return 0;
    if(a[i] > first ){
        second = first;
        first = a[i];
    }

    else if(a[i] < first && a[i] > second)
    {
        second = a[i];
    }
    SMax(a,n,i + 1);
    return second;

}

int main(){
    int a[20],h;
    cin >> h;
    for(int i = 0;  i < h; i++)
        cin >> a[i];

    cout << SMax(a,h,0);
}
