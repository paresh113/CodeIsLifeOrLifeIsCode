#include<bits/stdc++.h>
using namespace std;


map < char , vector< char>> mp;
map < char, bool> vis;

void topoSort(char ch, stack < char > &s){    /// & deyata khub gurutopurno, ta na hole 2ta vinno stack bujhai
   // cout << "dukse 1" << endl;
    vis[ch] = true;
    for(char adj : mp[ch]){
            //cout << "dukse 2"<< endl;
        if(!vis[adj]){
            //cout << "dukse 3"<< endl;
            vis[adj] = true;
            topoSort(adj,s);
        }
    }

    s.push(ch);
    //cout << s.top() << "aita " << endl;
}

int main(){
    int n,e;
    char x,y;
    stack < char > s;
    cin >>  n >> e;
    for( int i = 0; i < e; i++){
        cin >> x >> y;
        mp[x].push_back(y); /// graph must be directed
    }

    for(char ch = 'a'; ch <= 'h'; ch++){
            //cout << "dukse 0"<< endl;
            if(!vis[ch])
                topoSort(ch,s);
    }

    while(!s.empty()){

        cout << s.top() << " ";
        s.pop();
    }
}
