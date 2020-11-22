#include<bits/stdc++.h>
using namespace std;

/**
     Encapsulation is defined as
     wrapping up of data and information under a single unit

     ( ** Data hiding because of protection **   Example: back part of tv )
*/



class television{
private:
    int sz;   ///  inch
  public :      /// access specifiers
     string brand,display;

    void get(string b, string d,int s){
          brand = b;
          display = d;
          sz = s;
     }
     int ret(){
         if(sz > 24)
            return true;
     }
};

int main()
{
    television obj;
    obj.get("sony","led",25);
    if(obj.ret())
        cout << "large screen";
    else
        cout << "small screen";
}
