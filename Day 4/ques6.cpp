//maximum product of the three numbers

//algorithm:
// The maximum product can be either:
// 1. The product of the three largest numbers
// 2. The product of the two smallest numbers and the largest number

class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        
        int n = nums.size();
        
        int max1 = nums[n-1] * nums[n-2] * nums[n-3];
        int max2 = nums[0] * nums[1] * nums[n-1];

        return max(max1, max2);
    }
};