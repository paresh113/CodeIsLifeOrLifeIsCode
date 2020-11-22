#include<bits/stdc++.h>
#include <bitset>
using namespace std;
#define ll long long
ll convertDecimalToBinary(ll n)
{
    ll binaryNumber = 0;
    ll remainder, i = 1, step = 1;

    while (n!=0)
    {
        remainder = n%2;
        n /= 2;
        binaryNumber += remainder*i;
        i *= 10;
    }
    return binaryNumber;
}
//ll convertBinaryToDecimal(ll n)
//{
//    ll decimalNumber = 0, i = 0, remainder;
//    while (n!=0)
//    {
//        remainder = n%10;
//        n /= 10;
//        decimalNumber += remainder*pow(2,i);
//        ++i;
//    }
//    return decimalNumber;
//}
void RotArray(int a[],int n,int k)
{
 int b[n],i;

 //Moving each element by k positions
 for(i=0;i<n;i++)
  b[(i+k)%n]=a[i];

 //Display Rotated Array
 for(i=0;i<n;i++)
  cout<<b[i]<<" ";

}

ll bitRotate(ll n,ll m,bool d){
   ll bin = convertDecimalToBinary(n);
   int rem,num,i,j,a[60001];
   while(bin!= 0){
       rem = bin % 10;
       a[i++] = rem;
       bin /= 10;
   }
   RotArray(a,n,m);
}
int main(){
   ll n,m;
   bool d;
   cin >> n >>m >> d;
   bitRotate(n,m,d);
   cout << "dec = "<< bitRotate(n,m,d);
}
