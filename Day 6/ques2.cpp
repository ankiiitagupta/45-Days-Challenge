//find the index of first occurence of the string

class Solution {
public:

    int strStr(string haystack, string needle) {
        
        int n=needle.size();
        for(int i=0;i<haystack.size();i++){
            string ans= "";
            int j=i,k=0;
            while(j<haystack.size() && k<needle.size()){
                if(haystack[j]==needle[k]){
                    ans=ans+haystack[j];
                    j++;
                    k++;
                }else{
                    break;
                }
            }
            if(ans==needle){
                return i;
            }
        }
        return -1;
    }
};