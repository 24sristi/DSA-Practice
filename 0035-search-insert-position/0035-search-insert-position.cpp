class Solution {
public:
    int searchInsert(vector<int>& v, int x) {
        long long st=0, en=v.size()-1;
        long long ans=v.size();
        while(st<=en){
            long long mid = st + (en-st)/2;
            if(v[mid]==x) return mid;
            else if(v[mid]<x){
                
                st=mid+1;
            }
            else {
                ans=mid;
                en=mid-1;
            }
        }
        return ans;
    }
};