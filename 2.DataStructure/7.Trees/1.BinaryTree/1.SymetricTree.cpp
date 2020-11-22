#include<bits/stdc++.h>
using namespace std;

struct node{

    int data;
    node * left, *right;
};
node *newNode(int key)
{
    node *temp = new node;
    temp->data  = key;
    temp->left  = temp->right = NULL;
    return (temp);
}
bool isSymmetric(node * root1, node * root2){
     if(root1 == NULL && root2 == NULL) return true;

     if(root1->data != root2->data) return false;
     return (isSymmetric(root1-> left, root2->right) && isSymmetric(root1->right, root2->left));

     return false;
}


int main() {

    node *root        = newNode(1);
    root->left        = newNode(2);
    root->right       = newNode(2);
    root->left->left  = newNode(2);
    root->left->right = newNode(4);
    root->right->left  = newNode(4);
    root->right->right = newNode(3);

    cout << isSymmetric(root, root);
    return 0;

}
