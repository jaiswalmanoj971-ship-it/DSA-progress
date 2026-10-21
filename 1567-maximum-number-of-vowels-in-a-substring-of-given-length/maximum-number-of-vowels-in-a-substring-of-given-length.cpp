class Solution {
public:
    bool isvowel(char s){
        if(s=='i' || s=='e' || s=='o' || s=='a' || s=='u'){
            return true;
            
        }
        return false;
    }
    int maxVowels(string s, int k) {
        int count=0;
        for(int i=0;i<k;i++){
            if(isvowel(s[i])) count++;
        }
        int ans=count;
        for(int i=k;i<s.size();i++){
            if(isvowel(s[i-k])) count--;
            if(isvowel(s[i])) count++;

            ans=max(ans,count);
        }
        return ans;
        
    }
};