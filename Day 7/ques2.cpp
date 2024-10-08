//group anagrams

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
               
        unordered_map<string, vector<string> > mp;
        for(int i=0;i<strs.size();i++){
            string temp=strs[i];
            sort(temp.begin(),temp.end());
            mp[temp].push_back(strs[i]);
        }

        vector<vector<string>> s;
        for(auto x:mp){
            s.push_back(x.second);
        }

        
        return s;
       
    }
};