class Solution {
public:
    vector<int> maxKDistinct(vector<int>& nums, int k) {
        int n = nums.size();
        sort(nums.begin(),nums.end());
        vector<int>ans;
        ans.push_back(nums[n - 1]);
        k--;
        for(int i = n - 2 ; i >= 0 ;i--){
            if(k == 0)
            break;
            if(nums[i + 1] != nums[i])
            {
                ans.push_back(nums[i]);
                k--;
            }
        }
         return ans;
    }
};