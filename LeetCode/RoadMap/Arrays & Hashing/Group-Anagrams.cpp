class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {

        unordered_map<string, vector<string>> anagrams;
        vector<vector<string>> result(anagrams.size());

        for (const string& w : strs) {

            string sorted = w;
            sort(sorted.begin(), sorted.end());
            anagrams[sorted].push_back(w);
        }

        for(const auto& g : anagrams){

            result.push_back(g.second);
        }

        return result;
    }
};