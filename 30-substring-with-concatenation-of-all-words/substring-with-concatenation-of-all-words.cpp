class Solution {
public:
    vector<int> findSubstring(string s, vector<string>& words) {
        vector<int> result;
        if (words.empty() || s.empty()) return result;
        int word_len = words[0].length();
        int word_count = words.size();
        int total_len = word_len * word_count;
        unordered_map<string, int> word_map;
        for (const string& word : words) {
            word_map[word]++;
        }
        for (int i = 0; i < word_len; ++i) {
            int left = i, right = i, count = 0;
            unordered_map<string, int> seen;
            while (right + word_len <= s.length()) {
                string word = s.substr(right, word_len);
                right += word_len;
                if (word_map.find(word) != word_map.end()) {
                    seen[word]++;
                    count++;
                    while (seen[word] > word_map[word]) {
                        string left_word = s.substr(left, word_len);
                        seen[left_word]--;
                        count--;
                        left += word_len;
                    }
                    if (count == word_count) {
                        result.push_back(left);
                    }
                } else {
                    seen.clear();
                    count = 0;
                    left = right;
                }
            }
        }
        return result;
    }
};
