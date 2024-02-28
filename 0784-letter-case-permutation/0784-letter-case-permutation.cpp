class Solution {
public:
    vector<string> letterCasePermutation(string s) {
        string in = s;
        string out = "";
        vector<string> ans;
        solve(in, out, ans);
        return ans;
    }

    void solve(string in, string out, vector<string> &ans) {
        if (in.length() == 0) {
            ans.push_back(out);
            return; 
        }
        if (isalpha(in[0])) {
            solve(in.substr(1), out + static_cast<char>(tolower(in[0])), ans);
            solve(in.substr(1), out + static_cast<char>(toupper(in[0])), ans);
        } else {
            solve(in.substr(1), out + in[0], ans);
        }
    }
};