#include<iostream>
using namespace std;
int top1 = 0, top2 = 0,mxStk = 20;
int a[21];


/// implementing stack 1 operations

///void push_a(int a[],int top1, int top2, int mxStk,int item){   //     ** declared globally **
void push_a(int item){
    if(top1+1 == top2 || top1 == mxStk || top2 == 1)
    {
        cout << "overflow";
        return;
    }
    else{
        top1++;
        a[top1] = item; /// have to increment first
    }
}
void pop_a(){
    if(top1 == -1){cout << "underflow"; return;}
    else top1--;
}
int top_a(){
    return a[top1];
}


/// implementing stack 2 operations

void push_b(int item){
    if(top1+1 == top2 || top1 == mxStk || top2 == 1)
    {
        cout << "overflow";
        return;
    }
    else{
        if(top2 == 20)
            top2 = mxStk;
        else
            top2 = top2 - 1;
        a[top2] = item;
    }
}
void pop_b(){
    if(top2 == mxStk-1){cout << "underflow"; return;}
    else top2++;
}
int top_b(){
    return a[top2];
}
int main(){
    push_a(2);
    push_a(3);
    push_a(4);
    pop_a();
    cout << top_a();
    push_b(5);
    push_b(7);
   // pop_b();
    cout <<top_b();


  // cout << top_a();


}
