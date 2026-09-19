class Solution {
  public:
    vector<int> getDivisors(int n) {
        if (n==1){
            vector<int> arr={1};
            return(arr);
        }
        int i;
        vector<int> v1={1};
        vector<int> v2={n};
        vector<int> v;
        for (i=2;i*i<n;i++){
            if (n%i==0){
                v1.push_back(i);
                v2.push_back(n/i);
            }
        }
        
        int s=v1.size();
        
        for (int j=0;j<s;j++){
            v.push_back(v1[j]);
        }
        if (i*i==n){
            v.push_back(i);
        }
        for (int j=s-1;j>=0;j--){
            v.push_back(v2[j]);
        }
        return(v);
        
    }
};