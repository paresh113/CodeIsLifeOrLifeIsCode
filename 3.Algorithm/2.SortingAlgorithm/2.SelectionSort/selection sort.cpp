#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int i,j,k,n,a[100];
    cin>>n;
    for(i=0;i<n;i++)
        cin>>a[i];
   for(j=0;j<n-1;j++){
    for(i=j+1;i<n;i++)
    {
        if(a[j]>a[i])
        {
//            k=a[j];
//            a[j]=a[i];
//            a[i]=k;
          swap(a[j],a[i]);
        }
    }
   }
    for(i=0;i<n;i++)
        cout<<a[i]<<" ";
}
