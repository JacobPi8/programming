class Solution {
public:
    int search(vector<int>& nums, int target) {
        
        int first = 0, last = nums.size() - 1, mid;

        while(first <= last){

            mid = first + (last - first) / 2;

            if(nums[mid] == target) return mid;

            if(nums[mid] >= nums[last]){
                
                if(target < nums[mid] && target >= nums[first]) last = mid - 1;
                else first = mid + 1;
            }
            else{

                if(target > nums[mid] && target <= nums[last]) first = mid + 1;
                else last = mid - 1;
            }

        }
        
        return -1;
        
    }
};