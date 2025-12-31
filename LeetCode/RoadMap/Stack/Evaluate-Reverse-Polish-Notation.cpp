class Solution {
public:
    int evalRPN(vector<string>& tokens) {

        stack<int> temp;
        
        for (const string& t : tokens) {

            if (t == "+" || t == "-" || t == "*" || t == "/") {

                int b = temp.top(); temp.pop();
                int a = temp.top(); temp.pop();

                if (t == "+") temp.push(a + b);
                else if (t == "-") temp.push(a - b);
                else if (t == "*") temp.push(a * b);
                else temp.push(a / b);
            }
            else temp.push(stoi(t));
        }

        return temp.top();
    }
};