class Solution {
public:
    int trailingZeroes(int n) {
        int i;
        int count=0;
         for(i=5;i<=n;i*=5){
            count=count+n/i;
         }
         return count;
    }
};