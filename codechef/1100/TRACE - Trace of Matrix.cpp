#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	for (;t>0;t--){
	    int n;
	    cin>>n;
	    int arr[n][n];
	    for (int i=0;i<n;i++){
	        for (int j=0;j<n;j++){
	            cin>>arr[i][j];
	        }
	    }
	    int trace=0;
	    for (int m=1;m<=n-1;m++){
	        int temp=0;
	        for (int j=0,i=j+m;i<=n-1;i++,j++){
	            temp=temp+arr[i][j];
	        }
	        if (temp>=trace){
	            trace=temp;
	        }
	    }
	    for (int m=1;m<=n-1;m++){
	        int temp=0;
	        for (int i=0,j=i+m;j<=n-1;i++,j++){
	            temp+=arr[i][j];
	        }
	        if (temp>=trace){
	            trace=temp;
	        }
	    }
	    int temp=0;
	    for(int i=0,j=0;i<=n-1;i++,j++){
	        temp+=arr[i][j];
	    }
	        if (temp>=trace){
	            trace=temp;
	        }
	    cout<<trace<<"\n";
    }
}