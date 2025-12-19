class Solution {
public:
    static bool comp(const pair<int,int>& a, const pair<int,int>& b) {

        return a.second > b.second;
    }

    vector<int> topKFrequent(vector<int>& nums, int k) {
        
        unordered_map<int, int> freq;
        for (int n : nums) {

            freq[n]++;
        }

        vector<pair<int, int>> tab(freq.begin(), freq.end());

        sort(tab.begin(), tab.end(), comp);

        vector<int> answer;

        for (int i = 0; i < k; i++) {

            answer.push_back(tab[i].first);
        }
        
        return answer;
    }
};