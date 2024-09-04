class Solution {
public:
    int getSum(int n){
        string s=to_string(n);
        int ans=0;
        for(char x: s){
            int y=x-'0';
            ans+=(y*y);
        }
        return ans;
    }
    bool isHappy(int n) {
        unordered_set<int>st;
        while(n){
            n=getSum(n);
            if(n==1) return true;
            if(st.find(n)!=st.end()) return false;
            st.insert(n);
        }
        return true;
    }
};