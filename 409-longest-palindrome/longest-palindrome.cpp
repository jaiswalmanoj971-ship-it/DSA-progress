class Solution {
public:
    int longestPalindrome(string s) {
        map<char,int>mp;
        bool odd=false;
        int sum=0;
        
        for(int i=0;i<s.size();i++){
            mp[s[i]]++;
        }
        for(auto i: mp){
            if(i.second%2==0){
                sum+=i.second;
            }
            else {
                sum+=i.second-1;
                odd=true;
            }
        }
        if(odd) sum+=1;
        return sum;
    }
};