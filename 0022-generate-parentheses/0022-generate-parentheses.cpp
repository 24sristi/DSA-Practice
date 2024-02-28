class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<string>ans;
        int close=n;
        int open=n;
        string out="";
        solve(open,close,out,ans);
        return ans;
    }
    void solve(int open, int close, string out, vector<string>&ans){
        if(open==0 && close == 0){
            ans.push_back(out);
            return;
        }
        if(open>0){
            string op1=out;
            op1.push_back('(');
            solve(open-1,close,op1,ans);
        }
        if(close>open){
            string op2=out;
            op2.push_back(')');
            solve(open, close-1, op2,ans);
        }
        return;
    }
};