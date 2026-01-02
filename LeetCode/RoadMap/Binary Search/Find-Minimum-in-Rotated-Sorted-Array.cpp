class Solution {
public:
    int findMin(vector<int>& nums) {

        int first = 0, last = nums.size() - 1, mid;
        int result = nums[0];
        
        if(nums[first] < nums[last]) return nums[first];

        while(first <= last){

            mid = first + (last - first) / 2;

            if(nums[mid] < result) result = nums[mid];

            if(nums[mid] >= nums[last]) first = mid + 1;
            else last = mid - 1;

        }
        
        return result;
        
    }
};