class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int mx = *max_element(nums.begin(), nums.end());
        int max_len = 0, current_len = 0;
        for (int i = 0; i < nums.size(); ++i) {
            if (nums[i] == mx) {
                current_len++;
                max_len = max(max_len, current_len);
            } else {
                current_len = 0;  
            }
        }
        
        return max_len;
    }
};
