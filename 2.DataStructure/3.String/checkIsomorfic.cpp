#include<bits/stdc++.h>
using namespace std;

#define Size 256

bool Isomorphic(string s1,string s2){

     int l1 = s1.size();
     int l2 = s2.size();
     bool ck[Size] = {false};
     int Map[Size];
     memset(Map, -1, sizeof(Map));

     if(l1 != l2 ) return false;

     for( int i = 0; i < l1; i++){

        if(Map[s1[i]] == -1){
            if(ck[s2[i]] == true){
                return false;
            }
            else ck[s2[i]] = true;
            Map[s1[i]] = s2[i];
        }
        else if (Map[s1[i]] != s2[i])
            return false;
     }
     return true;
}


int main(){
    string s1,s2;
    cin >> s1 >> s2;

    cout << Isomorphic(s1,s2);

}
