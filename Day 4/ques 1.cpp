//sort thee colors

void sortColors(vector<int>& nums) {
       
       int arr[3]={0};
       for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                arr[0]++;
            }
            if(nums[i]==1){
                arr[1]++;
            }
            if(nums[i]==2){
                arr[2]++;
            }
       }
       int j=0;
       for(int i=0;i<3;i++){
         if(arr[i]!=0){
           do{
            nums[j]=i;
            j++;
            arr[i]--;
           }while(arr[i]>0);
         }
       }
      
    }