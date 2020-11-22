#include<bits/stdc++.h>
using namespace std;

struct node{
    int val;
    node* left;
    node* right;
};
node *Insert(int data){
     node * temp = new node;
     temp->val = data;
     temp->left = temp ->right = NULL;

     return (temp);
}

int minDepth(node * root){

    if(!root) return 0;
    if(root->right == NULL && root->left == NULL)
       return 1;
    return min(minDepth(root->left), minDepth(root->right))+ 1;

}




int main(){
    node *root = Insert(1);
    root->left = Insert(2);
    root->right = Insert(3);
    root->left->left = NULL;
     root->left->right = NULL;
         root->right->left = NULL;
    root->right->right = Insert(4);
    int d = minDepth(root);
    cout << d;


}
