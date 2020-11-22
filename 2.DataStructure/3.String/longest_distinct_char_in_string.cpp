#include<bits/stdc++.h>
using namespace std;


int main(){
    vector< char > s;
    string str; cin >> str;
    int k = 0;
    int j = 0;
    int Max = 0;
    vector< char >  :: iterator it;

    for( int i = 0; i < str.size(); i++){
         if ( find(s.begin(), s.end(), str[i]) == s.end()){
            s.push_back(str[i]);
            j++;
            int sz = s.size();
            Max = max(Max , sz);
         }
         else{
            s.erase(s.begin());
            s.push_back(str[i]);
            k++;
         }
    }



    for(it = s.begin(); it != s.end(); it++){
        cout << *it ;
    }
    cout << endl << Max ;

}
