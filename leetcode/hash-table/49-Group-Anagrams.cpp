class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ans;
        unordered_map<string, vector<string>> mp;
        for (const string& s : strs) {
        int count[26] = {0};
        for (char c : s) {
            count[c - 'a']++;
        }

        string key;
        key.reserve(26 * 2);
        for (int i = 0; i < 26; i++) {
            key += '#';
            key += to_string(count[i]);
        }

        mp[key].push_back(s);
    }


    ans.reserve(mp.size());
    for (auto& entry : mp) {
        ans.push_back(move(entry.second));
    }
    return ans;
    }
};