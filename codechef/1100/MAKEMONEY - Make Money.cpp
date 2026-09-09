#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	for(;t>0;t--){
	    int n,x,c;
	    cin>>n;
	    cin>>x;
	    cin>>c;
	    int times=0;
	    int arr[n];
	    for (int i=0;i<n;i++){
	        cin>>arr[i];
	    }
	    for (int i=0;i<n;i++){
	        if (x-arr[i]>c){
	            arr[i]=x;
	            times++;
	        }
	    }
	    int sum=0;
	    for (int i=0;i<n;i++){
	        sum+=arr[i];
	    }
	    cout<<(sum-(times*c))<<"\n";
	}

}
