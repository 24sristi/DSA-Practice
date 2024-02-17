class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int maxWealth=0;
        for(vector<int>cust:accounts){
            int customerWealth=0;
            for(int bank:cust){
                customerWealth+=bank;
            }
            maxWealth=max(customerWealth, maxWealth);
        }
        return maxWealth;
    }
};