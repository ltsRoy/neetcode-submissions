class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>>seen;

        for(string str:strs){
            string key=str;
            sort(key.begin(),key.end());
            seen[key].push_back(str);
        }

        vector<vector<string>> result;
        for(auto const& [key,group] : seen){
            result.push_back(group);
        }
        return result;
    }
};


