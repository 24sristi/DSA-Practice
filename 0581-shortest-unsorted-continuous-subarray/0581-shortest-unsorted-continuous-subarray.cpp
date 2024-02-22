class Solution {
public:
    bool outOfOrder(vector<int>&nums,int i){
        int x=nums[i];
        if(i==0) return x>nums[1];
        if(i==nums.size()-1) return x<nums[nums.size()-2];
        return x<nums[i-1] or x>nums[i+1];
    }
    int findUnsortedSubarray(vector<int>& nums) {
        if(nums.size()<=1) return 0;
        int smallest=INT_MAX;
        int largest=INT_MIN;
        int fl=0;
        for(int i=0;i<nums.size();i++){
            if(outOfOrder(nums,i)){
                smallest=min(smallest,nums[i]);
                largest=max(largest,nums[i]);
                fl=1;
            }
        }
        if(fl==0) return 0;
        int stInd=0;
        while(smallest>=nums[stInd]) stInd++;
        int enInd=nums.size()-1;
        while(largest<=nums[enInd]) enInd--;
        return enInd-stInd+1;
    }
};