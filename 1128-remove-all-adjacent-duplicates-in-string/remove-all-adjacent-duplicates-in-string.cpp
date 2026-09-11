class Solution {
public:
    string removeDuplicates(string s) {
        stack<char>ans;int i=s.size()-1;

        while(i>=0){
            
            if( !ans.empty() && s[i]==ans.top() ){
                ans.pop();
            }
            else{
                ans.push(s[i]);
            }
            i--;

        }
        string r="";
        while(!ans.empty()){
            r+=ans.top();
            ans.pop();

        }
        return r; 
    }
};