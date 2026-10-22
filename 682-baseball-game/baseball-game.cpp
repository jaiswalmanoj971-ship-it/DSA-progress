class Solution {
public:
    int calPoints(vector<string>& s) {
        vector<int>st;
        for(int i=0;i<s.size();i++){
            if(s[i]=="C") st.pop_back();
            else if(s[i]=="D") st.push_back(2*st.back());
            else if(s[i]=="+"){
                int one=st.back();
                st.pop_back();
                int two=st.back();
                st.push_back(one);
                st.push_back(one+two); 
            }
            else st.push_back(stoi(s[i]));

        }
        int sum=0;
        for(auto i: st){
            sum+=i;
        }
        return sum;
    }
};