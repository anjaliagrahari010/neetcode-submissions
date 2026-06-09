class Solution {
public:
    int maxArea(vector<int>& heights) {
        int n=heights.size();
        int l=0;
        int r=n-1;
        int currWater;
        int maxWater=0;
        while(l<r){
            int width=r-l;
            int ht=min(heights[l],heights[r]);
            currWater=width*ht;
            maxWater=max(currWater,maxWater);
            if(heights[l]<heights[r]){
                l++;
            }
            else{
                r--;
            }
        }
        return maxWater;

    }
};
