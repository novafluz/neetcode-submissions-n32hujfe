class Solution {
public:
    bool isValid(string s) {
        stack<char> myStack;
        for (char word : s) {
            if (word == '(') {
                myStack.push(')');
            } else if (word == '[') {
                myStack.push(']');
            } else if (word == '{') {
                myStack.push('}');
            } else {
                if (myStack.empty() || myStack.top() != word) return false; 
                myStack.pop();
            }
        }
        return myStack.empty();
    }
};
