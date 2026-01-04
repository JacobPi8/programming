class Solution {
public:
    int characterReplacement(string s, int k) {

        vector<int> count(26);
        int length = 0, maxCount = 0;
        int left = 0, right = 0; 
        
        while(right < s.length()){

            count[s[right] - 'A']++;
            maxCount = max(maxCount,count[s[right] - 'A']);
            if(right - left + 1 - maxCount <= k){

                length = max(length,right - left + 1);  
            }
            else{

                count[s[left] - 'A']--;
                left++;
            }
            right++;
        }

        return length;
    }
};