class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int currCnt=0, maxCnt=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                currCnt=0;
                continue;
            }
            currCnt++;
            if(currCnt>maxCnt){
                maxCnt=currCnt;
            }
        }
        return maxCnt;
    }
};