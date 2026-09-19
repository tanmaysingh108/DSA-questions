class Solution {
  public:
    int maxSubarraySum(vector<int> &arr) {
        int sum=arr[0];
        int n=arr.size();
        int current=0;
        for (int i=0;i<n;i++){
            current+=arr.at(i);
            sum=max(sum,current);
            if (current<0){
                current=0;
            }
        }
        return(sum);
    }
};