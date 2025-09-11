class Solution {
public:
    int jump(vector<int>& nums) {
        int end = 0, far = 0, jumps = 0;
        for(int i = 0; i < nums.size() - 1; i++){
            far = max(far , i + nums[i]);
            if(i == end){
                if(end == far) return -1;
                jumps++;
                end = far;
            }
        }
        return end >= nums.size() - 1 ? jumps : -1;
    }
};