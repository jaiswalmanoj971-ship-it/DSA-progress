class Solution {
public:
    bool checkRecord(string s) {
        int ab=0, l=0;

        for(int i=0; i<s.size(); i++){
            if(s[i]=='A'){
                ab++;
                l=0;
            }
            else if(s[i]=='L'){
                l++;
                if(l>=3) return false;
            }
            else {
                l=0;
            }

            if(ab>=2) return false;
        }

        return true;
    }
};