class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        
        vector<int> answer (nums.size(), 1);
        int before = 1, after = 1;

        for(int i = 0; i < nums.size(); i++){

            answer[i] = before;
            before *= nums[i];
        }

        for(int i = nums.size() - 1; i >= 0; i--){

            answer[i] *= after;
            after *= nums[i];
        }

        return answer;
    }
};