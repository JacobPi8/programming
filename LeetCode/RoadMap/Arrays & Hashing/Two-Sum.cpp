class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        unordered_map<int, int> numbers;

        for(int i = 0; i < nums.size(); i++) {

            int diff = target - nums[i];
            if(numbers.contains(diff)) return {i, numbers[diff]};
            numbers[nums[i]] = i;
        }
        
        return {};
    }
};