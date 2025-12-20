class Solution {
public:
    bool isPalindrome(string s) {

        string phrase;
        for (char c : s) {

            c = tolower(c);
            if(isalnum(c)) phrase +=c ;
        }
        
        for (int i = 0, j = phrase.size() - 1; i < j; i++, j--) {

            if (phrase[i] != phrase[j]) {

                return false;
            }
        }

        return true;
    }
};