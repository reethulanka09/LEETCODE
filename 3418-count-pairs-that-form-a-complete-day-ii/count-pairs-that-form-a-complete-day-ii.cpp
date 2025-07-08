class Solution {
public:
    long long countCompleteDayPairs(vector<int>& hours) {
        map<long long,long long>mpp;
        long long c=0;
        for(int i=0;i<hours.size();i++){
            int r0= hours[i]%24;
            int r=(24-r0)%24;
            if(mpp.find(r)!=mpp.end()){
                c+=mpp[r];
            }
            mpp[r0]++;
        }
        return c;
    }
};