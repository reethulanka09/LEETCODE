class Solution {
public:
    int minRemoval(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int i=0,j=i;
        int n=nums.size();
        int c=0;
        while(j<nums.size()){
            long long res = (long long) nums[i]*k;
            if(nums[j]<=res){
                c=n-(j-i+1);
            }
            else{
                i++;
            }
            j++;
        }
        return c;
    }
};