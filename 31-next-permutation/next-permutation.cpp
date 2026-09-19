class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int found=-1;int stop=-1;
        for(int i=nums.size()-1;i>=1;i--){
            if(nums[i]>nums[i-1]){
                found=i-1;
                stop=i-1;
                break;
               
            } 
        }
        if(found == -1) {
            reverse(nums.begin(), nums.end());
            return;
        }

        for(int i=nums.size()-1;i>=1;i--){
            if(nums[i]>nums[found]){
                swap(nums[found],nums[i]);
                break;
            }
        }

        reverse(nums.begin() +stop+1, nums.end());

        
    }
};