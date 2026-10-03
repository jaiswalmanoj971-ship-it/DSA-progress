class Solution {
public:
    bool isvalid(string s){
        int i=0;
        stack<char>st;
        while(i<s.size()){
            if(s[i]=='('){
                st.push(s[i]); 
            }
            else if(!st.empty() && st.top()=='(' && s[i]==')'){
                st.pop();
            }
            else {
                return false;
            }
            i++;
        }
        return st.empty();
    }
    
    void make(string &s,int n,vector<string>&ans){
        if(s.size()==n*2){
            if(isvalid(s)){
                ans.push_back(s);
            }
            return;
        }

        s.push_back('(');
        make(s,n,ans);
        s.pop_back();

        s.push_back(')');
        make(s,n,ans);
        s.pop_back();

    }
    vector<string> generateParenthesis(int n) {
        vector<string>ans;
        string s="";
        make(s,n,ans);

        return ans;
    }
};