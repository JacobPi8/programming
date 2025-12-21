class Solution {
public:
    int maxArea(vector<int>& height) {

        int left = 0;
        int right = height.size() - 1;
        int container = 0;
        
        while (left < right) {

            int h = min(height[left], height[right]);
            int w = right - left;
            int temp = h * w;
            container = max(container, temp);

            if (height[left] < height[right]) left++;

            else right--;
        }

        return container;
    }
};