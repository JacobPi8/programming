class Solution {
public:
    int longestConsecutive(vector<int>& nums) {

        int seq = 0;
        unordered_set<int> set;
        set.reserve(nums.size());
        for (int n : nums) {

            set.insert(n);
        }
        
        for (int n : set) {

            if (set.find(n - 1) == set.end()) {

                int current = n;
                int streak = 1;

                while (set.find(current + 1) != set.end()) {

                    current++;
                    streak++;
                }

                seq = max(seq,streak);
            }  
        }

        return seq;
    }
};