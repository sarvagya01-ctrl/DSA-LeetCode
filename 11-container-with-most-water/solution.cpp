// 0 ms | 63 MB
class Solution {
public:
    int maxArea(vector<int>& height) {
        int n=height.size();
        int lp=0;
        int rp=n-1;
        int mx=0;
        while(lp<rp){
            int wt=rp-lp;
            int ht=min(height[lp],height[rp]);
            int curr=wt*ht;
            mx=max(mx,curr);
            height[lp]<height[rp]?lp++:rp--;

        }return mx;   
    }
};