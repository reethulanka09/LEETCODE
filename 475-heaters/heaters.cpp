class Solution {
public:
    int findRadius(vector<int>& houses, vector<int>& heaters) {
        sort(heaters.begin(),heaters.end());
        int radius = 0;
        for(int i = 0;i<houses.size();i++){
            int idx = lower_bound(heaters.begin(),heaters.end(),houses[i]) - heaters.begin();
            int right = (idx < heaters.size()) ? abs(heaters[idx]-houses[i]) : INT_MAX;
            int left = (idx > 0) ? abs(heaters[idx-1]-houses[i]) : INT_MAX;
            radius = max(radius , min(left,right));
        }
        return radius;
    }
};