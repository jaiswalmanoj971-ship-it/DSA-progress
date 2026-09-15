class Solution {
public:
    bool isAnagram(string s, string t) {
        map<char,int>mp;
        if(s.size()!=t.size()) return false;

        for(auto i : s){
            mp[i]++;
        }
        for(auto i : t){
            if(mp.find(i)==mp.end()){
                return false;
            }
            if(mp[i]==0) return false;
            mp[i]--;
        }

        return true;
        
    }
};