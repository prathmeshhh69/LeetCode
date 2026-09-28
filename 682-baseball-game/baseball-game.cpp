class Solution {
public:
    int sum(stack<int> st){
        int currSum=0;
        for(int i=0; !st.empty(); i++){
            currSum+=st.top();
            st.pop();
        }
        return currSum;
    }
    int calPoints(vector<string>& operations) {
        stack<int>st;

        for(int i=0; i<operations.size(); i++){
            if(operations[i]=="D"){
                int existScore=st.top();
                st.push(existScore*2);
            }
            else if(operations[i]=="C"){
                st.pop();
            }
            else if(operations[i]=="+"){
                int firstScore=st.top();
                st.pop();
                int secondScore=st.top();
                st.pop();
                st.push(secondScore);
                st.push(firstScore);
                st.push(firstScore+secondScore);
            }
            else st.push(stoi(operations[i]));
        }
        int sumofstack=sum(st);
        return sumofstack;
    }
};