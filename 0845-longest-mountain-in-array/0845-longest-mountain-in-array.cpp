class Solution {
public:
    int longestMountain(vector<int>& arr) {
        int maxSoFar=0;
        int n=arr.size();
        for(int i=1;i<n-1;){
            if(arr[i-1]<arr[i]&&arr[i+1]<arr[i])
            {
                int cnt=1,j=i;
                while(j>=1&&arr[j-1]<arr[j]){
                    j--;
                    cnt++;
                }
                while(i<n-1&&arr[i+1]<arr[i]){
                    i++;
                    cnt++;
                }
                maxSoFar=max(cnt,maxSoFar);
            }
            else{
                i++;
            }
        }
        return maxSoFar;
    }
};