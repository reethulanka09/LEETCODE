class Solution {
public:
    vector<int> maxSubsequence(vector<int>& nums, int k) {
        vector<int>vec=nums;
        sort(nums.begin(),nums.end());
        map<int,int>mpp;
        for(int i=nums.size()-k;i<nums.size();i++){
            mpp[nums[i]]++;
        }
        vector<int>res;
        for(int i=0;i<vec.size();i++){
            if(mpp.find(vec[i])!=mpp.end()){
                res.push_back(vec[i]);
                mpp[vec[i]]--;
                if(mpp[vec[i]]==0) mpp.erase(vec[i]);
            }
        }
        return res;
    }
};