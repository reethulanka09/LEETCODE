class Solution {
public:
    int countBinarySubstrings(string s) {
        int re = 0, pre = 0, st = 1;
        for (int i = 1; i < s.size(); i++) {
            if (s[i] == s[i - 1]) st++;
            else {
                pre = st;
                st = 1;
            }
            if (st <= pre) re++;
        }
        return re;
    }
};
