class Solution {
public:
     string leftjus(vector<string>&words,int diff,int i,int j)
    {
        string temp = words[i];
        int remSpace = diff - (j - i - 1);
        for(int k = i+1; k < j; k++){
            temp += ' ';
            temp += words[k];
        }
        while(remSpace){
            temp += ' ';
            remSpace--;
        }
    return temp;
    }
    string middlejus(vector<string>& words,int diff,int i,int j){
         int remSpace = diff /(j - i - 1);
         int extraSpace = diff % (j - i - 1);
         string temp = words[i];
        for(int p = i + 1; p < j; p++){
            for(int k = 1; k <= remSpace ; k++){
                temp += ' ';
            }
            while(extraSpace){
                temp += ' ';
                extraSpace--;
            }
            temp += words[p];
        }
      return temp;

    }
    vector<string> fullJustify(vector<string>& words, int maxWidth) {
        int length;
        int i = 0,j;
        vector <string> res;
        int sz = words.size();
        while(i < sz){
            length = words[i].size();
            j = i+ 1;
            while(j < sz && (length + words[j].size() + (j - i - 1)) < maxWidth ){
                length += words[j].size();
                j++;
            }
            int diff = maxWidth - length;
            int words_cnt = j - i;
            if(words_cnt == 1 || j >= sz){
                string s = leftjus(words,diff,i,j);
                res.push_back(s);
            }
            else{
                string s = middlejus(words,diff,i,j);
                res.push_back(s);
            }
             i = j;
        }
        return res;
    }


};
