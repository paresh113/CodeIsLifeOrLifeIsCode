#include<bits/stdc++.h>
using namespace std;



vector < int > sl;
vector < int > sr;
int w[20];
stack < pair<int,int> > s;
vector < int > v;
vector< int > v1;
vector< int > v2;
vector< int > v3;

void nsl(vector < int > v2){
     for(int i = 0; i < v2.size(); i++){
        if(s.size() == 0)
           sl.push_back(-1);
        else if(s.size() > 0 && s.top().first > v2[i]){
           while(s.size() > 0 && s.top().first > v2[i]){
                 s.pop();
           }
                if(s.size() == 0)
                   sl.push_back(-1);
                else
                    sl.push_back(s.top().second);
          }
         else if(s.size() > 0 && s.top().first <= v2[i])
            sl.push_back(s.top().second);

       s.push({v2[i],i});
     }

}
void nsr(vector < int > v3){
    while(!s.empty()){
    s.pop();
    }
     for(int i = v3.size() - 1; i >=0 ; i--){
        if(s.size() == 0)
           sr.push_back(v3.size());
        else if(s.size() > 0 && s.top().first > v3[i]){
           while(s.size() > 0 && s.top().first > v3[i]){
                 s.pop();
           }
                if(s.size() == 0)
                   sr.push_back(v3.size());
                else
                    sr.push_back(s.top().second);
          }
         else if(s.size() > 0 && s.top().first < v3[i])
            sr.push_back(s.top().second);

     s.push({v3[i],i});
     }

}

int MAH(vector <int> v){
    if(s.size() > 0){
        while(!s.empty()){
        s.pop();
        }
    }
    nsl(v);
    if(s.size() > 0){
        while(!s.empty()){
        s.pop();
        }
    }
    nsr(v);
    reverse(sr.begin(),sr.end());
    for(int i = 0; i < v.size(); i++)
        w[i] = (sr[i] - sl[i] -1) * v[i];
    sort(w,w+v.size());

    return w[v.size()-1];

}

int main(){

    int n,a[10][10]; cin >> n;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> a[i][j];
        }
    }
    for(int j = 0; j < n; j++){
        v1.push_back(a[0][j]);
    }
    int ans1 = MAH(v1);
   // cout << ans1 << endl;
    int ans;
    for( int i = 1 ; i < n; i++){
        for(int j = 0; j < n; j++){
            if(a[i][j] == 0)
                v[j] = 0;
            else
                v[j] = v1[j] + a[i][j];
        }
       ans = max(ans1,MAH(v));
    }
    cout << ans << endl;
}
