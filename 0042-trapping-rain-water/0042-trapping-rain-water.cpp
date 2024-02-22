class Solution {
public:
    int trap(vector<int>& height) {
        int n=height.size();
        vector<int>left(n,0);
        vector<int>right(n,0);
        int maxSoFar=0;
        for(int i=0;i<n;i++){
            if(height[i]>maxSoFar) maxSoFar=height[i];
            left[i]=maxSoFar;
        }
        maxSoFar=0;
        for(int i=n-1;i>=0;i--){
            if(height[i]>maxSoFar) maxSoFar=height[i];
            right[i]=maxSoFar;
        }
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=(min(left[i],right[i])-height[i]);
        }
        return sum;
    }
};