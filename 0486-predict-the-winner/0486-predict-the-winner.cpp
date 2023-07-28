class Solution {
public:
    int maxDiff(vector<int>& nums, int left, int right){
        if(left==right) return nums[left];
        return max(nums[left]-maxDiff(nums,left+1,right), nums[right]-maxDiff(nums,left,right-1));
    }
    bool PredictTheWinner(vector<int>& nums) {
        return maxDiff(nums,0,nums.size()-1)>=0;
    }
};