class Solution {
public:
    string reverseWords(string s) {
        int n=s.size(),i=0;
        string reverse="";
       while(i<n){
           string temp="";
           while(s[i]==' '&& i<n)i++;
           while(s[i]!=' '&& i<n){
            temp=temp+s[i];
            i++;
        }
       if(temp.size()>0){
           if(reverse.size()==0){
               reverse=temp;
           }
           else{
               reverse=temp+ " "+reverse;
           }
       }
       }
        return reverse;
    }
};
