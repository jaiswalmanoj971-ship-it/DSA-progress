class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        vector<vector<int>>store(nums.size()+1);

        for(auto x:mp){
            store[x.second].push_back(x.first);

        }

        vector<int>ans;
        for(int i=nums.size();i>=0;i--){
            for(int x: store[i]){
                ans.push_back(x);
            }
            if(ans.size()==k){
                return ans;
            }

        }
        return ans;
    }
};