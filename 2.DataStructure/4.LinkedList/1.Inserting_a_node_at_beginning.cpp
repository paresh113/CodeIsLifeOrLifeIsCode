/// Inserting a node at the beginning


#include<stdio.h>
#include<bits/stdc++.h>
#include<stdlib.h>

struct Node {
    int data;
    struct Node* next;
};
struct Node* head;
void Insert(int x){
    Node* temp = (Node*) malloc(sizeof(struct Node));
    temp->data = x;
    temp->next = head;
    head = temp;
}
void Print(){
    struct Node* temp = head;
    printf("List is : ");
    while(temp != NULL){
        printf("%d ",temp->data);
        temp = temp-> next;
    }
    printf("\n");

}
int main(){
        head = NULL;
        printf("How many numbers ?: ");
        int n;
        scanf("%d",&n);
        for(int i = 0; i <n; i++){
            int x;
            printf("Enter a number : ");
            scanf("%d",&x);
            Insert(x);
            Print();
        }
}








