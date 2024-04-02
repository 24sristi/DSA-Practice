class Solution {
public:
    bool isIsomorphic(string s, string t) {
       int table[128] = {0}, len = s.size();
        bool istMapped[128] = {0};

        for(int i = 0; i < len; i++){
            if(table[s[i]] == 0 && istMapped[t[i]] == 0){
                table[s[i]] = t[i];
                istMapped[t[i]] = true; 
            }
        }

        for(int i=0; i < len; i++){
            if (char(table[s[i]])!= t[i] ){
                return false; 
            }
        }
        return true;  
    }
};