class Solution {
public:
    int gcd(int a, int b) {
    return (b == 0) ? a : gcd(b, a % b);
    }
    int lcm(int a, int b) {
        return (a / gcd(a, b)) * b;
    }
    vector<int> replaceNonCoprimes(vector<int>& nums) {
        vector<int>ans;
        stack<int>st;
        st.push(nums[0]);
        for(int i=1;i<nums.size();i++){
            int x = nums[i];
            while (!st.empty() && gcd(st.top(), x) > 1) {
                x = lcm(st.top(), x);
                st.pop();
            }
            st.push(x);
        }
        while(!st.empty()){
            ans.push_back(st.top());
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};