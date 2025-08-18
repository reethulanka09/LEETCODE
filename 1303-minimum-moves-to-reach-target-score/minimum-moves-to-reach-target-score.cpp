class Solution {
public:
    int minMoves(int target, int maxDoubles) {
        long long moves = 0;
        if(maxDoubles == 0) return target - 1;
        while(target>1){
            if(target%2==0 and maxDoubles>0){
                target /= 2;
                maxDoubles -=1;
                moves++;
            }
            else{
                target -= 1;
                moves++;
            }

        }
        return moves;
    }
};