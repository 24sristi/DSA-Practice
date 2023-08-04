class Solution {
public:
    unordered_set<string>dict;
    int n;
    int t[301];
    bool solve(int idx, string &s){
        if(idx==n){
            return true;
        }
        if(t[idx]!=-1) return t[idx];
        if(dict.find(s)!=dict.end()) return true;
        for(int l=1; l<s.length();l++){
            string temp = s.substr(idx,l);
            if(dict.find(temp)!=dict.end() && solve(idx+l,s)) return true;
        }
        return t[idx]=false;
    }
    bool wordBreak(string s, vector<string>& wordDict) {
        n=s.length();
        memset(t, -1, sizeof(t));
        for(auto x: wordDict){
            dict.insert(x);
        }
        return solve(0, s);
    }
};