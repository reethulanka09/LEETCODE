class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        int mi = INT_MAX;
        for(int i=1;i<arr.size();i++){
                mi = min(mi , arr[i]-arr[i-1]); 
        }
        vector<vector<int>>vec;
        for(int i=1;i<arr.size();i++){
                if(arr[i]-arr[i-1] == mi){
                    vec.push_back({arr[i-1],arr[i]});
                }
        }
        return vec;
    }
};