class Solution {
public:
    int trap(vector<int>& height) {

        int left = 0;
        int left_tip = 0;
        int right = height.size() - 1;
        int right_tip = 0;
        int water_level = 0;

        while (left < right) {

            if (height[left] < height[right]) {

                left_tip = max(left_tip, height[left]);
                water_level += left_tip - height[left];
                left++;
            } 
            else {

                right_tip = max(right_tip, height[right]);
                water_level += right_tip - height[right];
                right--;
            }
        }

        return water_level; 
    }
};