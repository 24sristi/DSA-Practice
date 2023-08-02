class Solution {
public:
    vector<vector<int>>ans;
    int n;
    unordered_set<int>st;
    void solve(vector<int>&temp, vector<int> &nums)
    {
        if(temp.size()==n){
            ans.push_back(temp);
            return;
        }
        for(int x : nums){
            if(st.find(x)==st.end()){
                temp.push_back(x);
                st.insert(x);
                solve(temp, nums);
                temp.pop_back();
                st.erase(x);
            }
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<int>temp;
        n= nums.size();
        solve(temp, nums);
        return ans;
    }
};