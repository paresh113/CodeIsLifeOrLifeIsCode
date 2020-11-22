#include<bits/stdc++.h>
using namespace std;

struct node{
    char value;
    node * right, *left;
};
bool isOperator(char ch){

    if(ch == '+'|| ch == '-'||ch == '*'||ch == '/'||ch == '^')
        return true;
    else return false;
}
node * newnode(char ch){
    node * temp = new node();
    temp -> value = ch;
    temp ->right = temp->left = NULL;

    return temp;
}

void inorder(node *root){
    if(root != NULL){
        inorder(root->left);
        cout << root->value ;
        inorder(root->right);
    }
}
void postorder(node* p)
{
    if (p == NULL) {
        return;
    }
    else {
        postorder(p->left);
        postorder(p->right);
        cout << p->value;
    }
}

node * BuildTree(string &s){
    stack < node*> st;
    node * t,*lf,*rt;
    for(int i = s.size() - 1; i >= 0;i--){
        if(isOperator(s[i])){
            t = newnode(s[i]);
            t->left = st.top();
            st.pop();
            t->right = st.top();
            st.pop();

            st.push(t);
        }
        else{
            t = newnode(s[i]);
            st.push(t);
        }

    }
    return st.top();
    st.pop();
}
int main(){
    string s; cin >> s;
    node * rt = BuildTree(s);
    inorder(rt);
    postorder(rt);

}
