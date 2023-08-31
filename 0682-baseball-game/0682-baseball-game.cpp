class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int>st;
        int sum=0;
        for(int i=0;i<operations.size();i++){
            if(operations[i]=="D"){
                int x=st.top()*2;
                st.push(x);
                sum=sum+st.top();
            }
            else if(operations[i]=="C"){
             sum=sum-st.top();
             st.pop();
            }
            else if(operations[i]=="+"){
                int temp=st.top();
                st.pop();
                int y=st.top()+temp;
                st.push(temp);
                st.push(y);
                sum=sum+st.top();

            }
            else{
                st.push(stoi(operations[i]));
                sum=sum+st.top();
            }
        }
     return sum;
    }
};


// class Solution {
// public:
//     int calPoints(vector<string>& operations) {
//         stack<int> ans;
//         int result = 0;
//         for (int i = 0; i < operations.size(); i++) {
//             if (operations[i] == "+") {
//                 int temp = ans.top();
//                 ans.pop();
//                 temp += ans.top();
//                 ans.push(temp);
//                 result+=ans.top();
//             } 
//             else if (operations[i] == "D") {
//                 int temp = ans.top() * 2;
//                 ans.push(temp);
//                 result+=ans.top();
//             } 
//             else if (operations[i] == "C") {
//                 result-=ans.top();
//                 ans.pop();
//             }
//             else {
//                 ans.push(stoi(operations[i]));
//                 result+=ans.top();
//             }
//         }
//         return result;
//     }
// };