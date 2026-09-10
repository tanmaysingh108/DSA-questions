#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	for (;t>0;t--){
	    int n;
	    cin>>n;
	    int arr[n];
	    int a=0;
	    if (n%2==0){
	        for(int i=0;i<n/2;i++){
	            arr[i]=n-a;
	            a++;
	            arr[n-1-i]=n-a;
	            a++;
	        }
	    }
	    else{
	        for(int i=0;i<(n-1)/2;i++){
	            arr[i]=n-a;
	            a++;
	            arr[n-1-i]=n-a;
	            a++;
	        
	        arr[(n-1)/2]=1;
	    }
	}
	for (int i=0;i<n;i++){
	    cout<<arr[i]<<" ";
	}
	cout<<"\n";
}
}
