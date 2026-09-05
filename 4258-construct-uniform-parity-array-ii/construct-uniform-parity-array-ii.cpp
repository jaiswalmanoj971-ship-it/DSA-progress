class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        int even=INT_MAX;int odd=INT_MAX;

        for(int i : nums1){
 
            if(i%2==0){
            even=min(i,even);
            }
            else{
            odd=min(i,odd);
            }
            
        }
        return (even==INT_MAX ||odd==INT_MAX) || even>odd;
        
    }
};