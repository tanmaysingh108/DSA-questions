class Solution {
  public:
    int countDigits(int n) {
        for (int i=1;i<=10;i++){
            if((n/pow(10,i))<1){
                return(i);
            }
    }
    }
};