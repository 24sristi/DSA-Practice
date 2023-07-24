class Solution {
public:
    vector<int> evenOddBit(int n) {
        bool odd=false;
        vector<int>ans={0,0};
        while(n>0){
            if(odd){
                if(n&1) ans[1]++;
                odd=false;
            }
            else{
                if(n&1) ans[0]++;
                odd=true;
            }
            n=n>>1;
        }
        return ans;
    }
};