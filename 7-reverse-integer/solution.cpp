// 3 ms | 8.6 MB
class Solution {
public:
    int reverse(int x) {
        long rev=0;
        int d=0;
        
        while(x!=0){
            d=x%10;
            rev=rev*10+d;
            x=x/10;
        }if (rev>INT_MAX || rev<INT_MIN){
            return 0;}
        return rev;
        }
        
};