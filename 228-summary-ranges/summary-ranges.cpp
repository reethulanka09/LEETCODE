class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        int i=0,j=1,n=nums.size();
        vector<string>ans;
        if(nums.size()==1) return {to_string(nums[0])};
        if (n == 0) return {};
        while(j<nums.size()){
            string s="";
            if(nums[j]-(long long)nums[j-1]!=1){
                if(nums[i]==nums[j-1]){
                    s+=to_string(nums[j-1]);
                }
                else{
                    s+=to_string(nums[i]);
                    s+="->";
                    s+=to_string(nums[j-1]);
                }
                ans.push_back(s);
                i=j;
            }
            j++;
        }
        string s = "";
        if (nums[i] == nums[n - 1]) {
            s += to_string(nums[i]);
        } else {
            s += to_string(nums[i]);
            s += "->";
            s += to_string(nums[n - 1]);
        }

        ans.push_back(s);
        return ans;
    }
};