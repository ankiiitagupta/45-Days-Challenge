//remove all the duplicates from the string

class Solution{
public:
	string removeDuplicates(string str) {
	    // code here
	    string ans="";
	    
	    if(str.length()==1){
	        return str;
	    }
	    
	    for(int i=0;i<str.length();i++){
	        if(str.find(str[i])==i){
	            ans=ans+str[i];
	        }
	    }
	    
	    return ans;
	}
};