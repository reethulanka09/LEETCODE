class Solution {
public:
    int countPalindromicSubsequence(string s) {
        map<char, vector<int>> mp;
        for (int i = 0; i < s.length(); i++) {
            mp[s[i]].push_back(i);
        }
        int ans = 0;
        for (auto& it : mp) {
            if (it.second.size() <= 1) {
                continue;
            }
            int index1 = it.second[0];
            int index2 = it.second.back();
            for (char ch = 'a'; ch <= 'z'; ch++) {
                auto iter1 = upper_bound(mp[ch].begin(), mp[ch].end(), index1);
                if (iter1 == mp[ch].end())
                    continue;
                if (*iter1 < index2) {
                    ans++;
                }
            }
        }
        return ans;
    }
};