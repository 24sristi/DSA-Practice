class Solution {
public:
    bool chargePossible(int n, vector<int>& batteries, long long mid){
        long long chargeRequired = mid*n;
        for(int x: batteries){
            chargeRequired-= min(mid,(long long )x);
        }
        return chargeRequired<=0;
    }
    long long maxRunTime(int n, vector<int>& batteries) {
        long long totalCharge = 0.0;
        for(int i=0;i<batteries.size();i++) totalCharge+=batteries[i];
        long long l=0, r=totalCharge/n, ans=0;
        while(l<=r){
            long long mid= (l+r)/2;
            if(chargePossible(n,batteries,mid)){
                ans=mid;
                l=mid+1;
            }
            else{
                r=mid-1;
            }
        }
        return ans;
    }
};