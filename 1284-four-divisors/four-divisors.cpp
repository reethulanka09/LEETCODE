class Solution {
public:
    int sumFourDivisors(vector<int>& nums) {
        int res = 0;
        int ans = 0;
        int c = 2;
        for (int i = 0; i < nums.size(); i++) {
            for (int j = 2; j <= int(sqrt(nums[i])); j++) {
                if (nums[i] % j == 0) {
                    c+=2;
                    res += j;
                    res += nums[i]/j;
                }
            }
            if(int(sqrt(nums[i]))*int(sqrt(nums[i]))==nums[i]){
                c+=1;
                c-=2;
                res+=int(sqrt(nums[i]));
            }
            if (c == 4) {
                ans += res;
                ans+=1;
                ans+=nums[i];
            }
            res = 0;
            c = 2;
        }
        return ans;
    }
};