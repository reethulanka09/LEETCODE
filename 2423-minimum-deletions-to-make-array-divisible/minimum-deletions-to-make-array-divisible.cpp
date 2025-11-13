class Solution {
public:
    int gcdRec(int a, int b) {
    if (b == 0) return a;
    return gcdRec(b, a % b);
    }

    int gcdArray(vector<int>& arr, int idx, int currentGCD) {
        if (idx == arr.size()) return currentGCD;
        currentGCD = gcdRec(currentGCD, arr[idx]);
        return gcdArray(arr, idx + 1, currentGCD);
    }

    int findDivisor(vector<int>& nums, int g, int idx) {
        if (idx == nums.size()) return -1;
        if (g % nums[idx] == 0) return idx;
        return findDivisor(nums, g, idx + 1);
    }
    int minOperations(vector<int>& nums, vector<int>& numsDivide) {
        int g = gcdArray(numsDivide, 1, numsDivide[0]);
        sort(nums.begin(), nums.end());
        return findDivisor(nums, g, 0);
    }
};
