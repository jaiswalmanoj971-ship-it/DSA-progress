class Solution {
public:
    bool canAliceWin(int n) {
        int dec=10;
        int turn=1;
        while(n>=dec){
            n=n-dec;
            dec--;
            turn++;
        }
        return turn%2==0;
    }
};