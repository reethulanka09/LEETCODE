class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>>mpp;
        for(auto word : strs){
            string key = word;
            sort(key.begin(),key.end());
            mpp[key].push_back(word);
        }
        vector<vector<string>>ans;
        for(auto i:mpp){
            ans.push_back(i.second);
        }
        return ans;
    }
};