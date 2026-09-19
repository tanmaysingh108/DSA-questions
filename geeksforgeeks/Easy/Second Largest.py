class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
    
        sort(arr.begin(),arr.end());
        int l=arr.size()-1;
        bool final=false;
        
        for (int i=l-1;i>=0;i--){
            if (arr.at(i)!=arr.at(i+1)){
                return(arr.at(i));
                final=true;
                break;
            }
        }
        if (final==false){
            return(-1);
        }
    }
};