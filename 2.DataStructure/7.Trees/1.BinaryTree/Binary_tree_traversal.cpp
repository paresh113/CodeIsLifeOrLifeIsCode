#include<iostream>
using namespace std;

/// code help from mycodeschool github

struct Node{
     char data;
     Node* right;
     Node* left;
};

void preorder(Node* root){
    if(root == NULL) return;
    cout << root->data << " ";
    preorder( root -> left);
    preorder( root -> right);
}
void inorder(Node* root){
    if(root == NULL) return;
    preorder( root -> left);
    cout << root->data << " ";
    preorder( root -> right);
}
void postorder(Node* root){
    if(root == NULL) return;
    preorder( root -> left);
    preorder( root -> right);
    cout << root->data << " ";
}


Node* Insert(Node* root, char data){

        Node* temp;
        if( root == NULL) {
            temp = new Node();
            temp -> data = data;
            temp ->left = temp -> right = NULL;
            root = temp;

        }
        else if(data <= root -> data){
            root -> left = Insert(root-> left, data);
        }
        else{
            root -> right = Insert(root-> right , data);
        }

    return root;
}

int main(){

        Node* root = NULL;
        root = Insert(root, 'm');
        cout << "Here root is 1 : "<<root << endl;
        root = Insert(root, 'b');
         cout << "Here root is 3 : "<<root << endl;
        root = Insert(root, 'd');
        root = Insert(root, 'c');
cout << "Here root is : 2 "<<root << endl;
        preorder(root);
        cout << endl;
        postorder(root);
        cout << endl;
        inorder(root);

}




















