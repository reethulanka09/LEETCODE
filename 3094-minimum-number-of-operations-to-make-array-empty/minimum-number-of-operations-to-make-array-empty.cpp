class Solution {
public:
    int minOperations(vector<int>& nums) {
        sort(nums.begin() , nums.end());
        int ans = 0;
        int i = 0;
        int n = nums.size();
        while(i<n){
            int count = 1;
            while((i+1<n) && (nums[i] == nums[i+1])){
                count++;
                i++;
            }
            if(count < 2){
                return -1;
            }
            else if(count <= 3){
                ans += 1;
            }
            else{
                if(count %3 == 0){
                    ans += count/3;
                }
                else{
                    ans += count/3 +1;
                }
            }
            i++;
        }
        return ans;
    }
};