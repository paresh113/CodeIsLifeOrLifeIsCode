#include<bits/stdc++.h>
using namespace std;

//vector< pair<int,int> > p;
vector < int > v;
stack < pair<int,int> > s;


void stockSpan(int a[],int n){
      for(int i = 0; i < n; i++){
        if( s.size() == 0)
            v.push_back(-1);
        else if(s.size() > 0 && s.top().first < a[i]){
            while(s.size() > 0 && s.top().first < a[i])
                s.pop();
            if(s.size() == 0)
                v.push_back(-1);
            else
                v.push_back(s.top().second);
        }
        else
            v.push_back(s.top().second);

        s.push({a[i],i});
      }

}
int main(){
   int a[10],n;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> a[i];
       // p.push_back(make_pair(a[i],i));
    }
    stockSpan(a,n);
    for( int i = 0; i < v.size(); i++){
        v[i] = i - v[i];
        cout << v[i] << " ";
    }
}
