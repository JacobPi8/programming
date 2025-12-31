class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {

        int n = heights.size();
        vector<int> leftBorder(n), rightBorder(n);
        stack<int> temp;
        int maxArea = 0;

        for (int i = 0; i < n; i++) {

            while (!temp.empty() && heights[temp.top()] >= heights[i]) temp.pop();
            leftBorder[i] = temp.empty() ? 0 : temp.top() + 1;
            temp.push(i);
        }

        while (!temp.empty()) temp.pop();

        for (int i = n - 1; i >= 0; i--) {

            while (!temp.empty() && heights[temp.top()] >= heights[i]) temp.pop();
            rightBorder[i] = temp.empty() ? n : temp.top();
            temp.push(i);
        }

        for (int i = 0; i < n; i++) {

            int width = rightBorder[i] - leftBorder[i];
            maxArea = max(maxArea, heights[i] * width);
        }

        return maxArea;
    }
};