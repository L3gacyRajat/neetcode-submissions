class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int> ang;
        unordered_map<char,int> ang2;
        for(auto i:s) ang[i]++;
        for(auto j:t) ang2[j]++;
        return ang2 == ang ? true : false;
    }
};
