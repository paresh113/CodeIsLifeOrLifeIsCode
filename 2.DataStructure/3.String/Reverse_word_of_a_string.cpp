#include<bits/stdc++.h>

using namespace std;

stack < char > st;
void Reverse(string s){
     // string s2 = "";
     int i = 0,k = 0;
     int j = s.size()-1;
      while(  i< j){
        char t = s[i];
        s[i] = s[j];
        s[j] = t;
        i++;
        j--;
      }
     s.insert(s.end(),  ' ');
     for(int i = 0; i < s.size(); i++){

        if(s[i] == ' '){

            while(!st.empty()){
                    cout << st.top();
                    st.pop();
            }
            if(i < s.size()-1)
                cout << s[i];
        }
        else st.push(s[i]);
     }

}


int main(){
    string s,dum;
    int n;
    char ch;
    cin >> n;
    getline(cin, dum);
    while(n--){
    getline(cin, s);
    ///cin >> s;
    Reverse(s);
    cout <<endl;
    }

}
