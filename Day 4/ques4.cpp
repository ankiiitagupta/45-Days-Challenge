class Solution {
public:
    int maxArea(vector<int>& height) {
        
        int maxdiff=0;
        int ans=0;
        int j=height.size()-1;
        int i=0;
        while(i<j){
            if(height[i]<height[j]){
                maxdiff = height[i] * (j-i);
                i++;
            }else if(height[i]>height[j]){
                maxdiff = height[j] * (j-i);
                j--;
            }else{
                maxdiff= height[j]*(j-i);
                j--;
                i++; 
            }

            if(maxdiff>ans){
                ans=maxdiff;
            }

        }
        return ans;
        
    }
};