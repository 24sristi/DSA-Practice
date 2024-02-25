class Solution {
public:
    bool isSubsequence(string s, string t) {
        int i=0,j=0;
        while(t[j]!='\0'){
            if(s[i]==t[j]){
                i++;
                j++;
            } else{
                j++;
            }
        }
        if(s[i]=='\0') return true;
        return false;
    }
};