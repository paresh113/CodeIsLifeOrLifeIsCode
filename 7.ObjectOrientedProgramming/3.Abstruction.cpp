#include<iostream>
#include<bits/stdc++.h>
using namespace std;


/**
    Abstraction means displaying only essential information
    and hiding the implementation details (ex: vol button of tv)
*/




class television{

private :
    int sz;   ///  inch

  public :      /// access specifiers

     string brand, display;

     void get(string b, string d,int s){
          brand = b;
          display = d;
          sz = s;
     }
     void show(){
        cout << "brand: "<< brand<< endl;
        cout << "display: "<< display<< endl;
        cout << "size: "<< sz<< endl;

     }
};
 int main(){
     television obj[10];
     int n,s; cin >> n;
     string b,d;

     for(int i = 0; i< n; i++){
            cin >> b >> d >> s;
        obj[i].get(b,d,s);
     }
      for(int i = 0; i< n; i++){
        obj[i].show();
      }

 }
