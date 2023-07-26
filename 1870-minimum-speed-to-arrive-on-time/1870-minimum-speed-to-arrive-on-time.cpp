class Solution {
public:

    double timeRequired(vector<int>& dist, int speed){
        double time =0.0;
        for(int i=0;i<dist.size()-1;i++){
            time+=dist[i]/speed + (dist[i]%speed==0?0:1);
        }
        time+=(double) dist[dist.size()-1]/speed;
        return time;
    }
    int minSpeedOnTime(vector<int>& dist, double hour) {
        int left =1;
        int right = 1e7;
        int minSpeed=-1;
        while(left<=right){
            int mid = left + (right-left)/2;
            if(timeRequired(dist,mid)<=hour){
                minSpeed =mid;
                right=mid-1;
            }
            else{
                left = mid+1;
            }
        }
        return minSpeed;
    }
};