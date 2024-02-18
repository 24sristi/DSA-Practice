class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char,int>mp;
        for(char x: magazine){
            mp[x]++;
        }
        for(char y: ransomNote){
            if(mp[y]>0) mp[y]--;
            else return false;
        }
        return true;
    }
};