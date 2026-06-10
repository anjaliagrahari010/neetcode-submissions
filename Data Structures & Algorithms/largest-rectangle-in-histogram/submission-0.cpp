class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int n=heights.size();
        vector<int>left(n);
        vector<int>right(n);
        stack<int>st;
        //Right smaller nearest bar
        for(int i=n-1;i>=0;i--){
            while(!st.empty() && heights[st.top()]>=heights[i]){
                st.pop();
            }
            if(st.empty()){
                right[i]=n;
            }
            else{
                right[i]=st.top();
            }
            st.push(i);
        }
        while(!st.empty()){
            st.pop();
        }
        // LEft smaller nearest bar
        for(int i=0;i<n;i++){
            while(!st.empty() && heights[st.top()]>=heights[i]){
                st.pop();
            }
            if(st.empty()){
                left[i]=-1;
            }
            else{
                left[i]=st.top();
            }
            st.push(i);
        }
        while(!st.empty()){
            st.pop();
        }
        int ans=0;
        for(int i=0;i<n;i++){
            int width=right[i]-left[i]-1;
            int currArea=heights[i]*width;
            ans=max(currArea,ans);
        }
        return ans;
    }
};
