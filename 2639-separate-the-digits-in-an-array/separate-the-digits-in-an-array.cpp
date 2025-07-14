class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        vector<int>ans;
        for(int i=0;i<nums.size();i++){
            vector<int>res;
            int t=nums[i];
            while(t>0){
                int r=t%10;
                res.push_back(r);
                t=t/10;
            }
            reverse(res.begin(),res.end());
            for(auto i:res){
                ans.push_back(i);
            }
        }
        return ans;
    }
};