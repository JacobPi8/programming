class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        
        int lenS1 = s1.length();
        int lenS2 = s2.length();

        if(lenS1 > lenS2) return false;

        vector<int> countS1(26);
        vector<int> countS2(26);

        for(int i = 0; i < lenS1; i++){

            countS1[s1[i] - 'a']++;
            countS2[s2[i] - 'a']++;
        }

        if(countS1 == countS2) return true;

        for(int right = lenS1; right < lenS2; right++){

            int left = right - lenS1;
            countS2[s2[right] - 'a']++;
            countS2[s2[left] - 'a']--;
            if(countS1 == countS2) return true;
        }

        return false;
    }
};