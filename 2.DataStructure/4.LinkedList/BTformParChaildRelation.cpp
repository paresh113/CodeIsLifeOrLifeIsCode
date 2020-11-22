#include<bits/stdc++.h>
using namespace std;
int cnt ;
struct node{
    int data;
    node *left;
    node *right;
};
     node * root = NULL;

node *newNode(int key){

    node * temp = new node();
    temp->data = key;
    temp ->left = temp->right = NULL;

    return (temp);
}
void fun(node *created[], int i,int par[]){
    if(created[i] != NULL){
        return;
    }
    created[i] = newNode(i);

    if(par[i] == -1){
        root = created[i];
        return;
    }
    if(created[par[i]] == NULL)
        fun(created, par[i],par);

    node *p = created[par[i]];

    if(p->left == NULL)
        p->left = created[i];
    else
        p->right = created[i];

}
node* createNode(int par[], int n){

     node *created[ n+ 1] ;
     for(int i = 0; i < n; i++){
        created[i] = NULL;
     }
     for(int i = 0; i< n; i++){
        fun(created,i,par);
     }
    return root;
}

void inorder( node *root){
    if(root != NULL){

        inorder(root->left);
        cout << root->data;
        inorder(root->right);
    }
}

int main(){
    int n; cin >> n;
    int par[n + 1];
    for(int i = 0;i < n; i++){
        cin>> par[i];
    }
    node * root = createNode(par,n);
    cout << root << endl;
    inorder(root);

}
