class Solution {
  public:
    bool isPrime(int n) {
        if (n==1)
            return(false);
        bool final=true;
        for(int i=2;i*i<=n;i++){
            if (n%i==0){
                final=false;
                break;
            }
        }
        return(final);
    }
};
