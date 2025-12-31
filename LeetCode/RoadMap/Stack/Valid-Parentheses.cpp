class Solution {
public:
    bool isValid(string s) {

        stack<char> brack;
        unordered_map<char, char> brackets = {

            {')', '('},
            {'}', '{'},
            {']', '['}
        };

        for (char c : s) {
            
            if (brackets.count(c)) {
                
                if (!brack.empty() && brack.top() == brackets[c]) brack.pop();

                else return false;
            } 
            else brack.push(c);
        }

        if (brack.empty()) return true;
        else return false;
    }
};