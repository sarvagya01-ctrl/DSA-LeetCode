// 0 ms | 11.6 MB
class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n=nums.size();
        int noo=0;
        int noz=0;
        int noot=0;
        for(int i=0;i<n;i++){
            if(nums[i]==0) noz++;
            else if(nums[i]==1) noo++;
            else noot++;
        }
         for(int i=0;i<n;i++){
            if(i<noz) nums[i]=0;
            else if(i<(noz+noo)) nums[i]=1;
            else if(i<(noz+noo+noot)) nums[i]=2;
         }
        
    }
};