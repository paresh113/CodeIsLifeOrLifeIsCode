#include<bits/stdc++.h>
using namespace std;
#define Size 256
map < char , int > mp;
char FindMax(string s){
    int l = s.size()-1;
    int max = -1;
    int con[Size] = {0};
    char res;
    for(int i = 0; i < l;i++){
        con[s[i]]++;
    }
    int f = -1,sc = -1;
    for(int i = 0; i < l;i++){
        if(con[s[i]] > sc && con[s[i]]){
            max = con[s[i]];
            //res = s[i];
        }
    }
    for(int i = 0; i < l;i++){
        if(con[s[i]] > sc && con[s[i]] < max){
            sc = con[s[i]];
            res = s[i];
        }
    }

    return res;

}
int main(){

     string s;
     getline( cin , s);
     char ans;
     ans = FindMax(s);
     cout << ans << endl;
}
