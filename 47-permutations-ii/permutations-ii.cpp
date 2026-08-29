class Solution {
public:
    
    void perms(vector<int>&nums,int idx,vector<vector<int>>&ans){

        if(idx==nums.size()){
            ans.push_back({nums});
            return;
        }
        map<int,int>used;


        for(int i=idx;i<nums.size();i++){

            if(used[nums[i]]>0){
                continue;
            }
            used[nums[i]]++;

            swap(nums[idx],nums[i]);

            perms(nums,idx+1,ans);
            
            swap(nums[idx],nums[i]);
            
        } 
    } 

    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<vector<int>>ans;

        perms(nums,0,ans); 

        return ans;

        
    }
};