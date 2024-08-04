//find all the duplicates in an array

class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> s;
        sort(nums.begin(),nums.end());
        for(int i=1;i<nums.size();i++){
            if(nums[i]==nums[i-1]){
                s.push_back(nums[i-1]);
            }
        }
        return s;
    }
};

