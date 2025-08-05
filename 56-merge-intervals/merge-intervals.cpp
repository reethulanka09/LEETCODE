class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end());
        vector<vector<int>>merged;
        merged.push_back(intervals[0]);
        for(int i=1;i<intervals.size();i++){
            vector<int>& lastinterval = merged.back();
            vector<int>& currinterval = intervals[i];
            if(currinterval[0]<=lastinterval[1]){
                lastinterval[1]=max(currinterval[1],lastinterval[1]);
            }
            else{
                merged.push_back(currinterval);
            }
        }
        return merged;
    }
};