#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main() {
	int t;
	cin>>t;
	for (;t>0;t--){
	    int n;
	    cin>>n;
	    vector<int> arr={0};
	    for (int i=1;i<=n;i++){
	        int x;
            cin >> x;
            arr.push_back(x);
	    }
	    for(int j=0;j<n;j++){
	    for (int i=1;i<n;i++){
	        if (arr[i]>arr[i+1]+1){
	            swap(arr[i],arr[i+1]);
	        }}
	    }
	    for (int i=1;i<=n;i++){
	        cout<<arr[i]<<" ";
	    }
	    	cout<<"\n";
	}

}
