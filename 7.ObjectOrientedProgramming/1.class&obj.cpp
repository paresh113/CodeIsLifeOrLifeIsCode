#include<iostream>
using namespace std;

/**
    A class is a user defined datatype.
    A class is like a blueprint of an object.


*/

class television {
   public :      /// access specifiers
     string brand;
     int sz;   ///  inch
     string display;

};


int main(){
    television obj;       /**
                            An Object is an instance of a Class.
                            When a class is defined, no memory is allocated but
                            when it is instantiated (i.e. an object is created)
                            memory is allocated.
                            */
    obj.brand = "sony";
    obj.sz = 24;
    obj.display = "LED";

     cout <<"brand: " << obj.brand<<endl;
     cout <<"int: " << obj.sz<<endl;
     cout <<"display: " << obj.display<<endl;


}
