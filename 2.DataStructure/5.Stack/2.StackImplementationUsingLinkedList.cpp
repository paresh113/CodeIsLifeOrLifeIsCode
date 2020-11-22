#include<iostream>
using namespace std;

struct node{
    int data;
    node* next;
};

node* head =0;
node* temp = head;

void push(int x){
    node* temp = new node();
    temp -> data = x;
    temp-> next = head;
    head = temp;
}
void pop(){
     int i = 1;
     while(temp != 0){
            node* cur;
            if(i%2 == 0){
               cur = temp->next;
               delete(temp);
               temp = cur;
            }
            i++;
     }
}
void print(){
     node* temp = head;
     while(temp != 0){
        cout << temp-> data << " ";
        temp = temp->next;
     }
}
int main(){

    push(2);
    push(3);
    push(4);
    push(6);
    push(7);
    push(8);
    pop();
    print();

}
