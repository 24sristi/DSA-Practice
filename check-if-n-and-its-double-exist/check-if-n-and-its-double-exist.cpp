class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        unordered_set<int>st;
        for(auto x: arr){
            if((x%2==0 && st.find(x/2)!=st.end()) ||st.find(x*2)!=st.end()){
                return true;
            }
            st.insert(x);
        }
        return false;
    }
};