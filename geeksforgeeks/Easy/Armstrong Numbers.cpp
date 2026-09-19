class Solution {
  public:
    bool armstrongNumber(int n) {
        std::string s=to_string(n);
        int sum=0;
        for (int i=0;i<3;i++){
            sum+=(s[i]-'0')*(s[i]-'0')*(s[i]-'0');
        }
        if (sum==n){
            return(true);
        }
        else
            return(false);
    }
};