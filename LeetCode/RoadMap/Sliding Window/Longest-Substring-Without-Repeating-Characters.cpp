class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
        if(s.empty()) return 0;

        unordered_set<char> seen;
        int left = 0, right = 0;
        int maxLength = 0;

        while(right < s.length()){

            bool erased = false;

            if(seen.count(s[right])){

                seen.erase(s[left]);
                left++;
                erased = true;
            }
            if(!erased){

                seen.insert(s[right]);
                maxLength = max(maxLength, right - left + 1);
                right++;
            }
        }

        return maxLength;
    }
};