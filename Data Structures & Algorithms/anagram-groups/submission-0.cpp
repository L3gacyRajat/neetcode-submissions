class Solution {
   public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> anagramMap;

        for (string s : strs) {
            string key = s;
            sort(key.begin(), key.end());
            anagramMap[key].push_back(s);
        }
        vector<vector<string>> ans;
        for (auto pair: anagramMap){
            ans.push_back(pair.second);
        }
        return ans;
    }
};
