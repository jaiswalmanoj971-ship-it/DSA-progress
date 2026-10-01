class Solution {
public:
    int reverse(int x) {
        int temp=0;
        while(x!=0){
            int digit=x%10;
             
            if(temp>INT_MAX/10 || (temp==INT_MAX/10 && digit>7) )return false;
            if(temp<INT_MIN/10 || (temp==INT_MAX/10 && digit<-8) )return false;
            temp=(temp*10)+digit;

            x/=10;
        }
        return temp;
        
    }
};