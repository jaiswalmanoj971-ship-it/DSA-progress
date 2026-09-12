class Solution {
public:
    bool check(vector<int>& nums) {
        int count=0;int i=0;
        while(i<nums.size()){

            if(nums[i]>nums[(i+1)%nums.size()]){
            count++;
            
            }
            i++;


        }

        return count<=1;


        
    }
};