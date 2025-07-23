class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> seen;
    int left = 0, right = 0, maxLen = 0;

    while (right < s.length()) {
        if (seen.find(s[right]) == seen.end()) {
            // Character not seen, add to set and move right pointer
            seen.insert(s[right]);
            maxLen = max(maxLen, right - left + 1);
            right++;
        } else {
            // Duplicate found, remove the leftmost character and move left
            seen.erase(s[left]);
            left++;
        }
    }

    return maxLen;
}
};