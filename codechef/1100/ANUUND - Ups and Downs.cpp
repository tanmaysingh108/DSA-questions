#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	for (;t>0;t--){
	    int n;
	    cin>>n;
	    int arr[n];
	    for (int i=0;i<n;i++){
	        cin>>arr[i];
	    }
	    int _temp;
		/*for (int d=n;d>0;d--){
	    for (int i=0;i<n-1;i++){
	        if (arr[i]>arr[i+1]){
	            _temp=arr[i];
	            arr[i]=arr[i+1];
	            arr[i+1]=_temp;
	        }
	    }
	    }*/
		//This is bubble sort which failed due to high time complexity
	    sort(arr,arr+n);
	    for (int i=1;i<n-1;i+=2){
	        _temp=arr[i];
	        arr[i]=arr[i+1];
	        arr[i+1]=_temp;
	    }
	    for (int i=0;i<n;i++){
	        cout<<arr[i]<<" ";
	    }
	    cout<<"\n";
	}
}
