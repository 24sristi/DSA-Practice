class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int>st(nums1.begin(), nums1.end());
        unordered_set<int>st2;
        for(int x: nums2){
            if(st.find(x)!=st.end()){
                st2.insert(x);
            }
        }
        vector<int>ans(st2.begin(), st2.end());
        return ans;
    }
};