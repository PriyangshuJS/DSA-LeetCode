class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int> ans;
        int result = 0;
        for (int i = 0; i < operations.size(); i++) {
            if (operations[i] == "+") {
                int temp = ans.top();
                ans.pop();
                int temp2 = ans.top()+temp;
                ans.push(temp);
                ans.push(temp2);
                result+=ans.top();
            } 
            else if (operations[i] == "D") {
                int temp = ans.top() * 2;
                ans.push(temp);
                result+=ans.top();
            } 
            else if (operations[i] == "C") {
                result-=ans.top();
                ans.pop();
            }

            else {
                ans.push(stoi(operations[i]));
                result+=ans.top();
            }
        }
        return result;
    }
};