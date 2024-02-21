class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()==0) return 0;
        int longestLen=1;
        unordered_set<int>st;
        for(int x: nums){
            st.insert(x);
        }
        for(auto x: st){
            if(st.find(x-1)==st.end()){
                int cnt=1;
                int nxt=x+1;
                while(st.find(nxt)!=st.end()){
                    cnt++;
                    nxt++;
                }
                if(cnt>longestLen) longestLen=cnt;
            }
        }
        return longestLen;
    }
};