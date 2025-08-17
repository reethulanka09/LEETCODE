class Solution {
public:
    int twoCitySchedCost(vector<vector<int>>& costs) {
        int minc=0;
        vector<int>vec;
        for(int i=0;i<costs.size();i++){
            minc+=costs[i][0];
            vec.push_back(costs[i][1]-costs[i][0]);
        }
        sort(vec.begin(),vec.end());
        for(int i=0;i<costs.size()/2;i++){
            minc+=vec[i];
        }
        return minc;
    }
};