#include<bits/stdc++.h>
using namespace std;

void delMid(stack < int > &s, int mid){
      if(mid == 1){
        s.pop();
        return;
      }
      int tmp = s.top();
      s.pop();
      delMid(s,mid - 1);
      s.push(tmp);
}
int main(){
    stack < int > s;
    int n,a[100]; cin >> n;
    for(int i =0; i < n; i++){
        cin >> a[i];
        s.push(a[i]);
    }
    int mid = s.size()/2 + 1;
    delMid(s,mid);
    while(!s.empty()){
        cout << s.top() << " ";
        s.pop();

    }
}
