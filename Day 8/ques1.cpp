//chocolate distribution problem

class Solution{
    public:
    long long findMinDiff(vector<long long> a, long long n, long long m){
    //code
        long long ans=INT_MAX;
        sort(a.begin(),a.end());
        int i=0;
        int j=i+m-1;
        while(j<n){
            if(a[j]-a[i]<ans){
                ans=a[j]-a[i];
                
            }
            j++;
            i++;
        }
        return ans;
        
    
    
    }   
};