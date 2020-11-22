#include<bits/stdc++.h>
using namespace std;
void remix(string s,int a[],int sz){
     vector< pair <int,char> > p;
     int i = 0;
     int n = s.size();
     while(sz >= 0){
        p.push_back(make_pair(a[i],s[i]));
        i++;
        sz--;
     }
     sort(p.begin(),p.end());
     for(int i = 0; i < n; i++){
         cout << p[i].second;
    }

}

int main(){
    string s;
    int a[200];
    cin >> s;
    int sz = s.size();
    for(int i = 0; i < sz; i++){
        cin >> a[i];
    }
     remix(s,a,sz);
}
