class Solution{
public:
    bool wordPattern(string pattern, string s) {
        unordered_map<char, string> mp;
        unordered_map<string, char> mp2;
        int i=0;
        int u=0;

        while(i<s.size() ){ 
            
            if(u>=pattern.size())return false;
            string temp="";
            int j=i; 

            while(j<s.size() && s[j]!=' '){
                temp+=s[j];
                j++;
            }

            if(mp.find(pattern[u])!=mp.end()){
                if(mp[pattern[u]]!=temp) 
                return false;

            }

            else{
                if(mp2.find(temp)!=mp2.end())    
                    return false; 

                mp[pattern[u]]=temp;
                mp2[temp]=pattern[u];
            }
           

            i=j+1;
            u++;

        }
        if(u != pattern.size()) return false;

        return true;

         
         
    }
};