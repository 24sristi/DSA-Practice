class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int greatestSoFar=arr[arr.size()-1];
        arr[arr.size()-1]=-1;
        int val;
        for(int i=arr.size()-2;i>=0;i--){
            val=arr[i];
            arr[i]=max(greatestSoFar, arr[i+1]);
            greatestSoFar=val;
        }
        return arr;
    }
};