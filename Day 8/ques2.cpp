//jump game

class Solution {
public:
    bool canJump(vector<int>& nums) {
        if(nums.size()==0){
            return false;
        }
        if(nums[0]==0 && nums.size()>1){
            return false;
        }
        int n = nums.size();
        int reach = 0;
        for (int i = 0; i < n; i++) {
            if(i > reach || reach >= n-1)
                break;
            
            reach = max(reach, i + nums[i]);
        }
        if (reach >= n-1)
            return true;
      
        return false;
        
    }
};