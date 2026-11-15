class Solution {
public:
    vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) {
        map<string,int>mp;
        vector<string>ans;

        for(int i=0;i<list1.size();i++){
            mp[list1[i]]=i;
        }

        int count=INT_MAX;
        for(int i=0;i<list2.size();i++){
            
            if(mp.find(list2[i])!=mp.end()){
                int sum= mp[list2[i]]+i;
                if(sum<count){
                    count=sum;
                    ans.clear();
                    ans.push_back(list2[i]);
                }
                else if(sum==count){
                    ans.push_back(list2[i]);
                } 
            }
        }

        return ans;
        
    }
};