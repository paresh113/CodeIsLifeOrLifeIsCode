#include<bits/stdc++.h>
using namespace std;


//bool Special(char ch){
//
//    if(ch >= 'A' && ch <= 'Z')|| (ch >= 'a' && ch <= 'z'){
//        return true;
//    }
//}


int main(){
   string s;
   getline(cin, s);
   /// whole sentence including space
   int c =0;
   bool ck = false;
for(int i = s.size()-1; i >=0 ; i--){
    if(s[i] == ' '){
        ck = true;
    }
}
if(ck){
   for(int i = s.size()-1; i >=0 ; i--){
        if(s[i] != ' '){
            c++;

        }
        else break;



   }
   cout << c << endl;

}
else{
    cout << "0" << endl;
}
}
