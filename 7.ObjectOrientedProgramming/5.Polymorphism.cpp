#include<bits/stdc++.h>
using namespace std;

/**
    compile time polymorphism ->

    Runtime polymorphism ->
       / function overloading
       / function overriding
*/


class television{
    public:
     int set;
     int cnt =0;
     void button(){
          if(cnt == 0){
            set = 1;
            cnt = 1;
          }
          else {
                set = 0;
                cnt = 0;
          }
        if(set == 1) cout << "on";
        else cout << "off";
     }
};
int main(){
    television tv;
    tv.button();
    tv.button();
}
