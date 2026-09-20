class Solution {
  public:
    bool isPalindrome(int n) {
        n=abs(n);
        bool value=true;
		    string s= to_string(n);
		    int len=s.size();
		    int middle=(len+1)/2;
		    for(int i=0,j=len-1;i<middle,j>=middle;i++,j--){
		        if (s[i]==s[j]){
		            continue;
		        }
		        else{
		            value=false;
		            break;
		        }
		    }
		    return(value);
    }
};