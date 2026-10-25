class Solution {
public:
    int minLength(string s) {

        string st="";

        for(int i=0;i<s.size();i++){
            if( !st.empty() &&
            ( (st.back()=='A' && s[i]=='B') ||
            (st.back()=='C' && s[i]=='D'))){
                st.pop_back();
            }
            else st.push_back(s[i]);
        }
      
        return st.size();
    }
};