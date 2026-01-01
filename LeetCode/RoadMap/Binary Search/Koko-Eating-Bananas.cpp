class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {

        int first = 1, last = *max_element(piles.begin(), piles.end()), mid;
        int result = last;
        
        while(first <= last){

            mid = first + (last - first) / 2;
            long long hours = 0;

            for(int p : piles){

                hours += (p - 1) / mid + 1;
            }

            if(hours <= h){

                result = mid;
                last = mid - 1;
            }
            else first = mid + 1;

        }
        
        return result;  
    }
};