#include<bits/stdc++.h>
using namespace std;

vector < int > sl;
vector < int > sr;
int w[20];
vector < int > v;
stack < pair<int,int> > s;


void nsl(int a[],int n){
     for(int i = 0; i < n; i++){
        if(s.size() == 0)
           sl.push_back(-1);
        else if(s.size() > 0 && s.top().first > a[i]){
           while(s.size() > 0 && s.top().first > a[i]){
                 s.pop();
           }
                if(s.size() == 0)
                   sl.push_back(-1);
                else
                    sl.push_back(s.top().second);
          }
         else if(s.size() > 0 && s.top().first <= a[i])
            sl.push_back(s.top().second);

       s.push({a[i],i});
     }

}
void nsr(int a[],int n){
    while(!s.empty()){
    s.pop();
}
     for(int i = n - 1; i >=0 ; i--){
        if(s.size() == 0)
           sr.push_back(n);
        else if(s.size() > 0 && s.top().first > a[i]){
           while(s.size() > 0 && s.top().first > a[i]){
                 s.pop();
           }
                if(s.size() == 0)
                   sr.push_back(n);
                else
                    sr.push_back(s.top().second);
          }
         else if(s.size() > 0 && s.top().first < a[i])
            sr.push_back(s.top().second);

     s.push({a[i],i});
     }

}

void MaxArea(int a[],int n){
//     for( int i = 0; i < n; i++){
//        cout << sr[i] << " ";
//     }
//     cout << endl;
//    for( int i = 0; i < n; i++){
//        cout << sl[i] << " ";
//     }
 //    cout << endl;
    nsl(a,n);
    nsr(a,n);
    for(int i = 0,j = n-1; i < n;j--, i++){
        w[i] = (sr[j] - sl[i] -1) * a[i];   /// this is the formula
       // cout << w[i]*a[i] << " ";
    }
    sort(w,w+n);
    cout << w[n-1];
}

int main(){
    int a[10],n;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    MaxArea(a,n);

}
