class Solution {
public:
    int calPoints(vector<string>& s) {
        stack<int>st;
        for(int i=0;i<s.size();i++){
            if(s[i]=="C") st.pop();
            else if(s[i]=="D") st.push(2*st.top());
            else if(s[i]=="+"){
                int one=st.top();
                st.pop();
                int two=st.top();
                st.push(one);
                st.push(one+two); 
            }
            else st.push(stoi(s[i]));

        }
        int sum=0;
        while(!st.empty()){
            sum+=st.top();
            st.pop();
        }
        return sum;
    }
};