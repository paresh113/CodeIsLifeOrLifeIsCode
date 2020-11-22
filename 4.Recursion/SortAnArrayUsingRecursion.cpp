#include<bits/stdc++.h>

using namespace std;
void Insert(vector < int >& v, int tmp){
     //cout << "ami 1";
     if(v.size() == 0 || v[v.size() - 1] <= tmp){
        v.push_back(tmp);
        return;
     }
     int val = v[v.size() - 1];
       v.pop_back();
       Insert(v,tmp);
       v.push_back(val);

}
void Sort(vector < int > &v){
    //cout << "ami 2";
     if(v.size() == 1){
        return;
     }
     int tmp = v[v.size() - 1];
     v.pop_back();
     Sort(v);
     Insert(v,tmp);
}


int main(){
    vector < int > v;
    int n,a[100]; cin >> n;
    for(int i = 0; i < n; i++){
        cin >> a[i];
        v.push_back(a[i]);
    }

    Sort(v);
    for(int i = 0; i < v.size(); i++)
        cout << v[i];
}
