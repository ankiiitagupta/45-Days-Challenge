//longest common prefix

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans="";
        sort(strs.begin(),strs.end());
        int n=strs.size()-1;
        string st=strs[0], last=strs[n];
        int i=0;
        while(i<st.size() && i<last.size()){
            if(st[i]!=last[i]){
                return ans;
            }
            ans=ans+st[i];
            i++;
        }
        return ans;
    }
};