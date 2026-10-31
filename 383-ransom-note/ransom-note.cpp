class Solution {
public:
    bool canConstruct(string r, string m) {
       int count=0;
       map<char,int>mp;
       for(int i=0;i<m.size();i++){
        mp[m[i]]++;
       }
       for(int i=0;i<r.size();i++){
        if(mp.find(r[i])!=mp.end() && mp[r[i]] > 0){
            count++;
            mp[r[i]]--;
        }
        else return false;
       }
       return count==r.size();
    }
};