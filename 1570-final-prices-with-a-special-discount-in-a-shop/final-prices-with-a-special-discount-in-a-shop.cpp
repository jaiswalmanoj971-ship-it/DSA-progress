class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        int i=0;int j=1;

        while(i<prices.size()){
            j=i+1;

            while(j<prices.size()){
                if(prices[i]>=prices[j]){
                prices[i]=prices[i]-prices[j];
                break;
                }
                else{
                j++;
                }
                 
            }
            i++;
           
            
        }

        
        return prices;
    }
};