#include<bits/stdc++.h>
using namespace std;
void Insert(vector < int >v, int tmp){
     if(v.size() == 0){
        v.push_back(tmp);
        return;
     }
     int val = v[v.size() - 1];
     v.pop_back();
     Insert(v,tmp);
     v.push_back(val);
}

void rev(vector< int > v){
      if(v.size() == 1){
        return;
      }
      int tmp = v[v.size() - 1];
      v.pop_back();
      rev(v);
      Insert(v,tmp);
}


int main(){
    int n; cin >> n;
    vector< int > v;
    for(int i =0; i < n; i++){
        cin >> v[i];
    }
    rev(v);
}
