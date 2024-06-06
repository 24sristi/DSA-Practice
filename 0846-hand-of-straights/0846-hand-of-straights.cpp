class Solution {
public:
    bool isNStraightHand(vector<int>& hand, int groupSize) {
        //similar to longest consecutive subsequence
        if(hand.size()%groupSize!=0) return false;
        sort(hand.begin(), hand.end());
        unordered_map<int,int>cardCnt;
        for(int x: hand) cardCnt[x]++;
        for(int x: hand){
            if(cardCnt[x]==0) continue;
            for(int i=0;i<groupSize;i++){
                if(cardCnt[x+i]==0){
                    return false;
                }
                cardCnt[x+i]--;
            }
        }
        return true;
    }
};

//dry run
//1->0, 2->0, 3->0, 4->0, 6->1, 7->1, 8->1
//1 2 2 3 3 4 6 7 8
//1->0, 2->0, 3->0, 4->1, 5->1