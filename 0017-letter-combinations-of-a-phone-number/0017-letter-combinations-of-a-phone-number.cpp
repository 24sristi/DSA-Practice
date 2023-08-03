class Solution {
public:
    unordered_map<char,string>m;
    
    vector<string>result;
    void solve(int idx, string &digits, string &temp)
    {
        if(idx>=digits.length()){
            result.push_back(temp);
            return;
        }
        string s = m[digits[idx]];
        for(int i=0;i<s.length();i++)
        {
            temp.push_back(s[i]);
            solve(idx+1,digits,temp);
            temp.pop_back();
        }
        
    }
    vector<string> letterCombinations(string digits) {
        m['2']="abc";
    m['3']="def";
    m['4']="ghi";
    m['5']="jkl";
    m['6']="mno";
    m['7']="pqrs";
    m['8']="tuv";
    m['9']="wxyz";
        string temp;
        if(digits.empty()) return {};
        solve(0,digits,temp);
        return result;
    }
};