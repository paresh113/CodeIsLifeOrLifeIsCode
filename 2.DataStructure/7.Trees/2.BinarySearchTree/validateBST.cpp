#include<bits/stdc++.h>
using namespace std;
struct node{
    int val;
    node * left;
    node * right;
};
node *newNode(int data){
    node *temp = new node();
    temp->val = data;
    temp->left = temp->right = NULL;
}

bool isBST(node* root){
    if(!root) return true;
    if(root->left !=NULL && root->left->val > root->val) return false;
    if(root->right != NULL && root->right->val < root->val) return false;


    return (isBST(root->left) ||  isBST(root->right));

    return true;
}

int main(){

    node * root = newNode(2);
    root->left = newNode(1);
    root->right = newNode(3);
//    root->left->left = NULL;
//    root->left->right = NULL;
//    root->right->left = newNode(4);
//    root->right->right = newNode(5);

   if(isBST(root)) cout << "yes";
   else cout << "no";

}

