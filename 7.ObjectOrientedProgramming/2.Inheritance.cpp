#include<iostream>
#include<bits/stdc++.h>
using namespace std;


/** why and when we need inheritance ?
               Ans: reduce redundency and
                    increase re-usability
*/
/**  modes of inheritance ?
                Ans: public, private and protected
*/

/*** types of inheritance ??
                 Ans:
                        1) single inheritance
                        2) multiple inheritance
                                (one derived class is inherited from more than one base classes.)
                        3) multilevel inheritance
                                (a derived class is created from another derived class)
                        4) Hierarchical Inheritance
                                (more than one derived class is created from a single base class)
                        5)Hybrid (Virtual) Inheritance
                                ( combination any tow of above)
*/

/// base class 1
class television{
  private:
    int sz;   ///  inch

  public:      /// access specifiers
     string brand, display;

     friend class new_tel;  /// to access private member from derived class
     friend class modern_tel;
     friend class computer;
};



///Example of Multiple inheritance ///

/**
/// base class 2

class computer{
  private:
      int s;
  public:
      string scr,brnd;
      friend class new_tel;
};

class new_tel : public television, public computer{
    public :
         void get(string b, string d,int s){
              brand = b;
              display = d;
              sz = s;
         }
         void print(){
          cout <<"television size = "<< sz << endl;
         }
          void get2(string b, string d,int s){
              brnd = b;
              scr = d;
              this->s = s;
         }
          void print2(){

              cout <<"pc size = "<< s << endl;
         }


};
int main(){
    television ob;
    new_tel obj ;
    obj.get("f","d",32);
    obj.print();
    computer obj2;
    obj.get2("c","ff",22);
    obj.print2();
}
*/

///Example of Multilevel inheritance ///

class modern_tel : public television{
public:
    string name;
    string dis,b;
    void get_modern(string d,string b){
        dis = d;
        this->b = b;

    }
  //  void print(string dis ,string b);

};
class computer : public modern_tel{
  private:
      int s;
  public:
      string scr,brnd;
    void get_tel(int s){
       sz = s;
    }

    void get_modern(string d,string b, string iname){
        dis = d;
        this->b = b;
        name = iname;
    }
    void get_pc(string d,string b,int sz){
          s = sz;
          scr = d;
          brnd = b;
      }
    void print(){
        cout << "Old tel size: " << sz << endl;
         cout << "M T brand : "<< b<< endl;
         cout << "M T display: "<< dis <<endl;
         cout << "pc size : " << s << endl;cout << "pc owner: " << name << endl;
    }

};



int main(){
    computer obj;
    modern_tel obj2;
    obj.get_tel(23);
    obj.get_modern("kjgj","kgk", "paresh");
    obj.get_pc("lcd","dell",15);
    obj.print();

}




