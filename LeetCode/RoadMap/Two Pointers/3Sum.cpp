class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {

        set<vector<int>> tab;
        sort(nums.begin(),nums.end());

        for (int i = 0; i < nums.size() - 2; i++) {

            if (i != 0 && nums[i] == nums[i - 1]) continue;

            int next = i + 1;
            int last = nums.size() - 1;

            while (next < last) {

                if (nums[i] + nums[next] + nums[last] < 0){

                    next++;
                }
                else if (nums[i] + nums[next] + nums[last] > 0){

                    last--;
                }
                else {

                    tab.insert({nums[i], nums[next], nums[last]});
                    next++;
                    last--;
                }
            }
        }
        return vector<vector<int>>(tab.begin(), tab.end());
    }
};