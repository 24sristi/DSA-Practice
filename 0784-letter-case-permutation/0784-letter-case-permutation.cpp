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
            return; // Corrected: Return statement to exit the function
        }
        if (isalpha(in[0])) {
            string out1=out;
            string out2=out;
            out1.push_back(tolower(in[0]));
            out2.push_back(toupper(in[0]));
            solve(in.substr(1), out1, ans);
            solve(in.substr(1), out2, ans);
        } else {
            solve(in.substr(1), out + in[0], ans);
        }
    }
};