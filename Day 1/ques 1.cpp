//find the duplicate number in array

//Algorithm:
// first sort the array and them find the number that is repeating

//time complexity: O(n)

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){
            if(nums[i]==nums[i+1]){
                return nums[i];
            }
        }
        return -1;
    }
};
