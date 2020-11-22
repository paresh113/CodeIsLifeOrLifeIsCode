#include<bits/stdc++.h>
using namespace std;


class Solution {



public:

    string reverseVowels(string s) {

               string temp = "aeiouAEIOU";
        bool vowel(char ch){
            for(int i =0 ; i < temp.size(); i++){
                if(temp[i] == ch)
                    return true;
            }

        }

        int i = 0;
        int j = s.size() - 1;

        while( i  < j ){

            if(!vowel[s[i]])
                i++;
            else if(!vowel[s[j]])
                j--;
            else{
                swap(s[i],s[j])
                    j--;
                    i++;
            }
        }

        return s;


    }
};
int main(){
   Solution obj;
   cout << obj.reverseVowels( "leetcode");


}
