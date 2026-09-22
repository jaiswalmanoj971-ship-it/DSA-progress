class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int ans=1;
        map<int,int>mp;
        for(int i=0;i<nums.size();i++){

            if(nums[i]>0){
           mp[nums[i]]++; 
           
            }
        }
        while (mp.find(ans) != mp.end()) {
            ans++;
        }
        
        return ans;
        
    }
};