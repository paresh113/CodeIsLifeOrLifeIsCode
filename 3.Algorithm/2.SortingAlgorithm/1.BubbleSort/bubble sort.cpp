#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
#define ll long long
int main()
{
    ll n,p,k,c;
    vector<int> v,a;
    cin>>n;
    for(int i=0;i<n;i++){
    {
      cin>>c;
      a.push_back(c);
    }
    cin>>p;
    for(int j=0;j<p;j++)
     {
       cin>>k;
       v.push_back(k);
     }
    vector<int>::iterator it;
     for(int i=0;i<p;i++)
     {

//        for(int j=0;j<n;j++)
//        {
//           if(v[i]>=a[j])
//           c++;
//        }
     it=upper_bound(a.begin(),a.end(),v[i]);
        cout<<*it<<endl;
     }

}
}

