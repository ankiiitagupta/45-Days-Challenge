//remove duplicates from array

int removeDuplicates(vector<int>& nums) {
        int cnt=0;
        for(int i=1;i<nums.size();i++){
            if(nums[i]!=nums[cnt]){
                cnt++;
                nums[cnt]=nums[i];
                
            }

        }
        return cnt+1;
    }