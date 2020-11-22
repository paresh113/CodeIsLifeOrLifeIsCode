#include<bits/stdc++.h>
using namespace std;

struct node{
   int data;
   node* next;
};
node * head =0;

void insrt(int ch){
    node* temp = new node();
    temp-> data = ch;
    temp -> next = head;
    head = temp;
}
void del(int ch){
    cout << ch <<endl;
    node* temp = head;
    node *prev ;
    if( temp != 0 && temp->data == ch){
               head = temp-> next;
                delete(temp);
                return;
    }
    while(temp != 0 && temp->data != ch){
         prev = temp;
         temp = temp -> next;
     }
     if(temp == 0) return;
     prev->next = temp->next;
     free(temp);

}
void print(){
     node* temp = head;
     while(temp != 0){
        cout << temp-> data;
        temp = temp->next;
     }
}
int main(){
    char ch;
    insrt(1);
    insrt(2);
    insrt(3);
    insrt(4);
    print();
    cout << endl;
   // del(1);
  //  print();
    del(2);
    //del(2);
    print();
}
