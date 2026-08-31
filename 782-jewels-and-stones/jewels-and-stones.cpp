class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        unordered_map<char,int>map;
        int i=0;
        while(i<jewels.size()){
            map[jewels[i]]++;
            i++;

        }
        int count=0;
         
        for(int i=0;i<stones.size();i++){
            if(map.find(stones[i])!=map.end()){
                count++;
            }
        }
        return count;
        
    }
};