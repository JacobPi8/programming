class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {

        unordered_set<int> count;

        for(int n : nums) {

            if(count.count(n)) return true;
            count.insert(n);
        }

        return false;
    }
};