// 6 ms | 263.5 MB
class Solution {
public:
 void rp(int i,int j,vector<int>&n){
             
             while(i<=j){
                int t=n[i];
                n[i]=n[j];
                n[j]=t;
                i++;
                j--;
             }return;
        }
    void rotate(vector<int>& nums, int k) {
       int n=nums.size();

        if(n==0) return;
        k=k%nums.size(); 
        rp(0,nums.size()-1-k,nums);
        rp(nums.size()-k,nums.size()-1,nums);
         reverse(nums.begin(),nums.end()); 
    }
};