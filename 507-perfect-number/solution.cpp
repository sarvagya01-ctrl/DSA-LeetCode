// 0 ms | 7.9 MB
class Solution {
public:
    bool checkPerfectNumber(int num) {
        int sum=0;
        if(num==1){
            return false;
            
        }for(int i=1;i<=sqrt(num);i++ ){
            if(num%i==0){
                sum+=i;
                if(num/i!=i && i!=1){
                    sum+=num/i;
                }
            }
        }if(sum==num){
            return true;
        }else{
            return false;
        }
        
    }
};