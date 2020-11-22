/**

     Runtime polymorphism ( method/ function overriding )
     it's also called late binding
     Use of virtual keyword
     Use of pure virtual function
*/



#include<iostream>
using namespace std;

class Employee{
protected:
      int salary;
      string name;
public:
      Employee(int isalary, string iname){
          salary = isalary;
          name = iname;
      }
      virtual void display(){
        cout << " employee name = "<< name <<"\n"<< "salary =" << salary << endl;
      }
     ///  virtual void display() = 0;
                                /// pure virtual function
                                /// jokhon use korbo, each and every derived class has to be at least one display function must
};

class HR : public Employee {

public:
    int age;

      HR(int salary, string s, int iage): Employee(salary, s){
          age = iage ;
      }
      void display(){
          cout << " employee(HR) name = "<< name <<"\n"<< "salary =" << salary << endl;
         cout << "HR age is " << age << endl;
      }
};
class SE : public Employee {

public:
    int age;

      SE(int salary, string s, int iage): Employee(salary, s){
          age = iage ;
      }
      void display(){
        cout << " employee name(SE) = "<< name <<"\n"<< "salary =" << salary << endl;
         cout << "SE age is " << age << endl;
      }
};

int main(){

    Employee *ptr_em[2];


    HR obj_hr(70000, "ratan", 40);
    SE obj_se(35000, "katub", 24);

///    for (int i = 0; i < 2; i ++){
///           /// kivabe kore dehkte hobe
///    }
    ptr_em[0] = &obj_hr;
    ptr_em[1] = &obj_se;
    ptr_em[0]-> display();
    ptr_em[1]-> display();
}
