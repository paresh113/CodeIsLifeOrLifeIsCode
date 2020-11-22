#include<bits/stdc++.h>
using namespace std;
vector<int> v[20];
queue<int> q;

int flag[200] = {0} ;
int ck = 0;
void bfs(int s){

     q.push(s);
     flag[s] = 1;
     //ck[s] = 1;
     while(!q.empty()){
          int f = q.front();
          q.pop();
         // cout << f << " ";
          flag[f] = 2;
          //ck[f] = 2;
          for(int i = 0; i < v[f].size(); i++){
                    int t = v[f][i];
                           // cout << "dukse1";
                    if(flag[t] == 0){
                        q.push(t);
                        flag[t] = 1;
                    }
                    else if(flag[t] == 1){
                        ck = 1;
                        return;
                    }

                }
     }
}

int main(){

	int n, e, x, y;
	cin >> n >> e;
    //memset(vis,-1,sizeof(vis));
	for(int i= 0; i<e; i++) {
		cin >>x >> y;
		v[x].push_back(y);
		v[y].push_back(x);
	}
	bfs(1);
	if(ck == 1){
        cout << "cycle exist";
	}
	else{
        cout << "cycle not exist";
	}
 }

