class Solution {
public:
    vector<pair<int,int>>ops{{100,0},{75,25},{50,50},{25,75}};
    vector<vector<double>> t;
    double probAEmpty(double a, double b){
        if(a<=0 && b<=0) return 0.5;
        if(a<=0) return 1.0;
        if(b<=0) return 0.0;
        if(t[a][b] != -1.0)
            return t[a][b];
        double probablity = 0.0;
        for(auto &p : ops){
            double a_serve = a-p.first;
            double b_serve = b-p.second;
            probablity+=probAEmpty(a_serve,b_serve);
        }
        return t[a][b] = 0.25*probablity;
    }
    double soupServings(int n) {
        if(n>=3500) return 1.0;
        t.resize(n+1, vector<double>(n+1, -1.0));
        return probAEmpty(n,n);
        
    }
};