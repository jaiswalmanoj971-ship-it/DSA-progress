class Solution {
public:
    void check(string a,string b,string &ans){
        int i=0;
        while(i<a.size() && i<b.size()){
            if(a[i]==b[i]){
                ans=ans+a[i];
                i++; 
            }
        else return;

        }
    }
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.empty()) return "";
        sort(strs.begin(),strs.end());
        string ans="";
        check(strs[0],strs[strs.size()-1],ans);
        return ans;
    }
};