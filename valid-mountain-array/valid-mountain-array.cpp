class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        if(arr.size()<3) return false;
        int i=1;
        for(;i<arr.size();i++){
            if(arr[i-1]>arr[i]){
                break;
            }
            if(arr[i-1]==arr[i]) return false;
        }
        if(i==1 || i==arr.size()) return false;
        for(;i<arr.size();i++){
            if(arr[i-1]<=arr[i]) return false;
        }
        return true;
    }
};