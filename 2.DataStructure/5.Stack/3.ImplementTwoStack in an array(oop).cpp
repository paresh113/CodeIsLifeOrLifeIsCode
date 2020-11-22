#include<bits/stdc++.h>
using namespace std;
/// int a[21];

class twoStack{
    int top1 = 0,top2 = 0,mxStk= 20;
    int *a;
public:
    twoStack(int n){    /// globally declared korleo hobe
        a = new int[n];
    }
    /// operations of stack 1
    void push1(int x){
        if(top1 == mxStk || top1+1 == top2 || top2 == 1) {cout <<"stackoerflow"; return;}
        a[++top1] = x;
    }
    int top_of_s1(){ return a[top1];}   /// top of stack
    int pop_from_s1(){top1--;}   /// pop operation

    /// operations of stack 2
    void push2(int x){  /// push operation
        if(top1 == mxStk || top1+1 == top2 || top2 == 1) {cout <<"stackoerflow"; return;}
        if(top2 == 0) top2 = mxStk;
        else a[--top2] = x;
    }
    int top_of_s2(){ return a[top2];} /// top of stack
    int pop_from_s2(){top2++;}/// pop operation

};
int main(){
    twoStack obj(21);

    obj.push2(3);
    obj.push1(4);
    obj.push1(5);
    obj.push1(4);
    obj.push2(7);
    obj.push2(9);
    cout <<"top of stack 1: "<< obj.top_of_s1()<< endl;
    obj.pop_from_s1();
    cout <<" after pop top of stack 1: "<< obj.top_of_s1()<< endl;
    cout << "top of stack 2: "<<obj.top_of_s2()<<endl;
    obj.pop_from_s2();
    cout <<" after pop top of stack 2: "<< obj.top_of_s2()<< endl;
}
