class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int len=nums.size();
        vector<int>cnt(len+1,0);
        for(int i=0;i<len;i++){
            cnt[nums[i]]++;
        }
        vector<int>ans;
        for(int i=1;i<=len;i++){
            if(cnt[i]==0){
                ans.push_back(i);
            }
        }
        return ans;
    }
};