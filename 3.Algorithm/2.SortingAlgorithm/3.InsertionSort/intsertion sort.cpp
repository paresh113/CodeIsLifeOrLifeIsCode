#include<iostream>
using namespace std;
int main()
{

    int i,n,j,a[100],p;
    cout<<"Please enter array size: ";
    cin>>n;
    cout<<"Please enter "<<n<<" elements: ";
    for(i=0;i<n;i++)
        cin>>a[i];
    for(i=1;i<n;i++)
    {
        j=i;
        p=i;
        while(j>0)
        {
            if(a[p]<a[p-1])
            {
                int temp=a[p];
                a[p]=a[p-1];
                a[p-1]=temp;
            }
            j--;
            p--;
        }
    }
    for(i=0;i<n;i++)
        cout<<a[i]<<" ";

    return 0;
}
