class Solution {
  public:
    int countDigits(int n) {
        for (int i=1;i<=10;i++){
            if(((int)(n/pow(10,i)))==0){
                return(i);
            }
    }
    }
};