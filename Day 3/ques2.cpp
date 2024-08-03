//majority element

int majorityElement(vector<int>& nums) {
    
    int n=nums.size();
    int cnt=1, ans=-1;
    if(n==1){
        return nums[0];
    }
    sort(nums.begin(),nums.end());
    for(int i=0;i<n-1;i++){
        if(nums[i]==nums[i+1]){
            cnt++;
            if(cnt>floor(n/2)){
                ans=nums[i];
            }
        }
        if(nums[i]!=nums[i+1]){
            cnt=1;
        }
    }
    return ans;
}