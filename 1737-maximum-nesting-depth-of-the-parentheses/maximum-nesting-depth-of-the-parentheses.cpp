class Solution {
public:
    int maxDepth(string s) {
        int x=0;int ans=INT_MIN;
        for(auto i: s ){
            if(i=='(') x++;
            if(i==')') x--;

            ans=max(ans,x);
        }
        return ans;
    }
};