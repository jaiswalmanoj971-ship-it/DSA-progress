class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit=0;
        int lowest=prices[0];
        
        for(int i=0;i<prices.size()-1;i++){
           
            lowest=min(lowest,prices[i]);

            int temp=prices[i+1]-lowest;

            profit=max(profit,temp);
        }
        return profit;
        
    }
};