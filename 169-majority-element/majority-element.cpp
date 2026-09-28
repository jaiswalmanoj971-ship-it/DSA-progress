class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int last=INT_MIN;int count=0;int ans=0;
        for(int i=0;i<nums.size();i++){
            if(count==0){
                last=nums[i];
                count=1; 
            }
            else if(nums[i]==last) count++;

            else count--;  
            
        }
        return last;
        
    }
};