class Solution {
public:
    void search(string s,vector<string>&ans){
        
        map<char, int> mp;
        string row1 = "qwertyuiop";
        string row2 = "asdfghjkl";
        string row3 = "zxcvbnm";

        for(char c : row1) mp[c] = 1;
        for(char c : row2) mp[c] = 2;
        for(char c : row3) mp[c] = 3;
         
        int row=mp[tolower(s[0])];

        for(int i=0;i<s.size();i++){
            if(mp[tolower(s[i])]!=row){ 
                return;
            } 
        }
        ans.push_back(s);
    }
    vector<string> findWords(vector<string>& words) {

        vector<string>ans;
        for(int i=0;i<words.size();i++){
            search(words[i],ans);
        }
        return ans;
        
    }
};