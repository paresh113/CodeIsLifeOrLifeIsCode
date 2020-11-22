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
int height(node* root){
    if(root == NULL) return 0;
    if(root->left == NULL && root->right == NULL)
        return 1;
    return max(height(root->left),height(root->right)) + 1;
}

bool isBalanced(node * root){
    if(!root) return true;
    int lh = height(root->left);
    int rh = height(root->right);
    if(abs(lh - rh) <= 1 && isBalanced(root->left) && isBalanced(root->right))
        return true;
    else return false;
}
int main(){

//        node* root = newNode(1);
//    root->left = newNode(2);
//    root->right = newNode(3);
//    root->left->left = newNode(4);
//    root->left->right = newNode(5);
//    root->left->left->left = newNode(8);


    node * root = newNode(1);
    root->left = NULL;
    root->right = newNode(3);
    root->left->left = NULL;
    root->left->right = NULL;
    root->right->left = newNode(4);
    root->right->right = newNode(5);

   if(isBalanced(root)) cout << "balanced";
   else cout << "not";

}
