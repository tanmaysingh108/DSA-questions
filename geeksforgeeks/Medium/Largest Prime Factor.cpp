class Solution {
  public:
    int largestPrimeFactor(int n) {

            int len=0;
                vector <int> factor;
                int i;
                for (i=2;i<=n;i++){
                    if (n%i==0){
                        factor.push_back(i);
                        len++;
                        while (n%i==0){
                            n/=i;
                        }
                    }
                }
                return(factor[len-1]);

    }
};