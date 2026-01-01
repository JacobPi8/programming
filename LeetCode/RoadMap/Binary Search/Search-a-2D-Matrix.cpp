class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {

        if(matrix.empty() || matrix[0].empty()) return false;

        int m = matrix.size(), n = matrix[0].size();
        int firstR = 0, lastR = m - 1, midR;

        while(firstR <= lastR){

            midR = firstR + (lastR - firstR) / 2;
            if(target > matrix[midR][n-1]) firstR = midR + 1;
            else if(target < matrix[midR][0]) lastR = midR - 1;
            else break;
        }

        if(firstR > lastR) return false;

        int first = 0, last = n - 1, mid;

        while(first <= last){

            mid = first + (last - first)/2;
            if(matrix[midR][mid] < target) first = mid + 1;
            else if(matrix[midR][mid] > target) last = mid - 1;
            else return true;
        }
        
        return false;
        
    }
};