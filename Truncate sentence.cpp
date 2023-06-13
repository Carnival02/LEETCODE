//Question no 1816.

class Solution {
public:
    string truncateSentence(string s, int k) {
        s=s+ " ";
        int n= s.length();

        int spc=0,i=0;
        while(spc!=k){
           if(s[i]==' '){
               spc++;
           
           if(spc==k){
               return s.erase(i);
           }
           }
           i++;

        }
        return "";
        
    }
};
