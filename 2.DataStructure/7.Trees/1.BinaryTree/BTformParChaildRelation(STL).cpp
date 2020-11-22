#include<bits/stdc++.h>
using namespace std;
struct TreeNode{
    int data;
    TreeNode * left;
    TreeNode * right;
};
TreeNode * newNode(int key){
    TreeNode * temp = new TreeNode();
    temp->data  = key;
    temp->left = temp ->right = NULL;
}

TreeNode *createNode(int par[],int n){

        map< int, TreeNode*> mp;
        TreeNode * temp, * root;

        for(int i = 0; i < n; i++){
            if(mp.find(i) == mp.end()){
                temp = newNode(i);
                mp[i] = temp;
            }
            if(par[i] == -1){
                root = mp[i];
            }
            else if(mp.find(par[i])== mp.end()){
                temp = newNode(par[i]);
                temp->left = mp[i];
                mp[par[i]] = temp;
            }
            else{
                if(mp[par[i]]->left == NULL)
                   mp[par[i]]->left = mp[i];
                else
                    mp[par[i]]->right = mp[i];
            }
        }
        return root;


}
void inorder( TreeNode *root){
    if(root != NULL){
           //  cout << "node "<<cnt ++;
        inorder(root->left);
        cout << root->data;
        inorder(root->right);
    }
}
int main(){
    int n,par[1000]; cin >> n;
    for(int i = 0; i < n; i++){
        cin >> par[i];
    }
    TreeNode * root = createNode(par,n);
    inorder(root);
}
