class Solution {
 
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int i=0;int j=1;
       while(i<nums.size() && j<nums.size()){
        if(j==nums.size()-1){
            i++;
            j=0;
        }
        if(nums[i]+nums[j]==target && i!=j){
            return {i,j};
        }
        else{
            j++;
        }
       }
       return {};
    }
   
};
  