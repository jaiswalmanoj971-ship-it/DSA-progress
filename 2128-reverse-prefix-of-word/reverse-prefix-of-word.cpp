class Solution {
public:
    string reversePrefix(string s, char ch) {
        int j=0;
        while(j<s.size()){ 
            if(s[j]==ch) break; 
            j++;
        }
        if(j==s.size()) return s;
        int i=0;
        while(i<j){
            swap(s[i],s[j]);
            i++;j--;
        }
        return s;


    } 
};