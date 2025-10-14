class Solution {
public:
bool inc(const vector<int>& v, int s, int k) {
    for (int i = s; i < s + k - 1; i++) {
        if (v[i] >= v[i + 1]) return false;
    }
    return true;
}

bool hasIncreasingSubarrays(vector<int>& v, int k) {
    int n = v.size();
    if (n < 2 * k) return false;
    for (int i = 0; i <= n - 2 * k; i++) {
        if (inc(v, i, k) && inc(v, i + k, k)) return true;
    }
    return false;
   }
};
