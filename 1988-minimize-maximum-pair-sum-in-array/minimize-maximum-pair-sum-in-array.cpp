class Solution {
public:
    int minPairSum(vector<int>& nums) {
        vector<int>v;
        int m=0;
        int r;
        sort(nums.begin(),nums.end());
        int i=0;
        int j=nums.size()-1;
        while(i<=j){
            v.push_back(nums[i]+nums[j]);
            i=i+1;
            j=j-1;
        }
        for(int i=0;i<v.size();i++){
            m=max(m,v[i]);
        }
        return m;
    }
};