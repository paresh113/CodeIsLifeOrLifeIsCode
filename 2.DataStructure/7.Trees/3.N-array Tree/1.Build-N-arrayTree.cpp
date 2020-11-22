
#include<bits/stdc++.h>
using namespace std;

struct listNode{
    char data;
    listNode *next;
};

struct List{
    listNode * head;
};


class Graph{

private:
        int n;
        char End;
        List*  v;
    public:
        Graph(int V)
        {
            n = V;

            v = new List[n];		 //total vertices
          //linking head of all vertices (array) to NULL ,it doesn't store any number only stores HEAD

        }
        void add(char ch){
             v[ch].head = NULL;
             End= ch;

        }
        void addEdge(char src,  char dst){
            listNode * newNode = new listNode();
            newNode -> data = dst;
            newNode -> next = v[src].head;
            v[src].head = newNode;

            //listNode * newNode = new listNode();
            newNode = new listNode();
            newNode -> data = src;
            newNode -> next = v[dst].head;
            v[dst].head = newNode;

        }
        void print(){
            for(char i ='a'; i < End; i++){
                listNode * temp = v[i].head;
                cout<<"\n Adjacency list of vertex "<<i<<"\n head ->";
                while(temp){
                    cout << temp->data<< "->";
                    temp = temp->next;
                }
                cout << endl;
            }
        }
};

int main(){
    Graph gh(5);


        gh.add('a');
        gh.add('b');
        gh.add('c');
        gh.add('d');
        gh.add('e');

        gh.addEdge('a','b');
        gh.addEdge('b','c');
        gh.addEdge('a','d');
        gh.addEdge('a','e');
        gh.addEdge('c','b');


    // print the adjacency list representation of the above graph
        gh.print();


}
