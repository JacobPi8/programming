class Solution {
public:
    vector<string> generateParenthesis(int n) {

        vector<string> answer;
        generate(answer, "", 0, 0, n);
        return answer;
    }

    void generate(vector<string>& answer, string current, int open, int close, int n){

        if(current.length() == n * 2)
        {
            answer.push_back(current);
            return;
        }
        if (open < n) generate(answer, current + "(", open + 1, close, n);
        if (close < open) generate(answer, current + ")", open, close + 1, n);

    }
};