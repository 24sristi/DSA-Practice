class Solution {
public:
    int countPairs(vector<int> &arr, int low, int mid, int high) {
        int cnt=0;
        int j=mid+1;
        for(int i=low;i<=mid;i++){
            while(j<=high && (long)arr[i]>(long)2*arr[j]){
                j++;
            }
            cnt+=j-(mid+1);
        }
        return cnt;
    }
    void merge(vector<int> &arr, int low, int mid, int high) {
    vector<int> temp; // temporary array
    int left = low;      // starting index of left half of arr
    int right = mid + 1;   // starting index of right half of arr

    //storing elements in the temporary array in a sorted manner//

    while (left <= mid && right <= high) {
        if (arr[left] <= arr[right]) {
            temp.push_back(arr[left]);
            left++;
        }
        else {
            temp.push_back(arr[right]);
            right++;
        }
    }

    // if elements on the left half are still left //

    while (left <= mid) {
        temp.push_back(arr[left]);
        left++;
    }

    //  if elements on the right half are still left //
    while (right <= high) {
        temp.push_back(arr[right]);
        right++;
    }

    // transfering all elements from temporary to arr //
    for (int i = low; i <= high; i++) {
        arr[i] = temp[i - low];
    }
}

int mergeSort(vector<int> &arr, int low, int high) {
    int cnt=0;
    if (low >= high) return cnt;
    int mid = (low + high) / 2 ;
    cnt+=mergeSort(arr, low, mid);  // left half
    cnt+=mergeSort(arr, mid + 1, high); // right half
    cnt+=countPairs(arr, low, mid, high);
    merge(arr, low, mid, high); // merging sorted halves
    return cnt;
}
    int reversePairs(vector<int>& nums) {
        int cnt = mergeSort(nums, 0, nums.size()-1);
        return cnt;
    }
};