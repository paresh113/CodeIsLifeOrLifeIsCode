#include<bits/stdc++.h>
using namespace std;
struct node{
    char value;
    node *left, *right;
};
bool isOperator(char ch){

    if(ch == '+'|| ch == '-'||ch == '*'||ch == '/'||ch == '^')
        return true;
    else return false;
}
node *newNode(char ch){
    node * temp = new node();
    temp -> value = ch;
    temp->left = temp->right = NULL;

    return temp;
}

node *BuildTree(string s){

    stack < node *> st;
    node *t,*lf,*rg;

    for(int i = 0; i < s.size(); i++){
        if(isOperator(s[i])){
            t =  newNode(s[i]);
            lf = st.top();
            st.pop();
            rg = st.top();
            st.pop();

            t->left = rg;
            t->right = lf;

            st.push(t);
        }
        else{
            t =  newNode(s[i]);
            st.push(t);
        }
    }
    return st.top();
    st.pop();
}

void inorder(node *root){
    if(root != NULL){
        inorder(root->left);
        cout << root->value<< " ";
        inorder(root->right);

    }
}
int main(){
   string s; cin >> s;
   node * root = BuildTree(s);
   inorder(root);

}
