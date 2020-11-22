#include<bits/stdc++.h>
using namespace std;
queue < int > s2;
void display(){
    while(!s2.empty()){
        cout << s2.front();
        s2.pop();
     }
}
void func(stack <int> s){
      if(s.size() > 0){
         s2.push(s.top());
         s.pop();
         func(s);
     }
    display();
}
int main(){
    stack < int > s;
    int n,a[20];
    cin >> n;
    for(int i = 0; i < n; i++){
            cin >> a[i];
            s.push(a[i]);
    }

    func(s);
}
