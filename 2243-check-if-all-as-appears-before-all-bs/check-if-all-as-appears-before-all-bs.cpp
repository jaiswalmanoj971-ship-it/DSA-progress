class Solution {
public:
    bool checkString(string s) {
        int count=0;

        for(int i=0;i<s.size();i++){
            if(s[i]=='b'){
                count++;
            }
            else if(s[i]=='a' && count>0){
                return false;

            }
        }
        return true;
        
    }
};