class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        int posDups=0;
        int len = arr.size()-1;
        for(int i=0;i<=len-posDups;i++){
            if(arr[i]==0){
                if (i == len - posDups) {
                    arr[len] = 0;
                    len -= 1;
                    break;
                }
                posDups++;
            }
        }
        int end=len-posDups;
        for(int j=end;j>=0;j--){
            if(arr[j]==0){
                arr[j+posDups]=0;
                posDups--;
                arr[j+posDups]=0;
            }
            else{
                arr[j+posDups]=arr[j];
            }
        }
    }
};