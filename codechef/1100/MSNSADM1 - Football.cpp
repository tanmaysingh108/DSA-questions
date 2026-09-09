#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	for(;t>0;t--){
	    int n;
	    cin>>n;
	    int A[n];
	    int B[n];
	    for (int i=0;i<n;i++){
	        cin>>A[i];
	    }
	    for (int i=0;i<n;i++){
	        cin>>B[i];
	    }
	    int total=0;
	    int temp;
	    for (int i=0;i<n;i++){
	        if (20*A[i]<=10*B[i]){
	            temp=0;
	        }
	        else{
	            temp=20*A[i]-10*B[i];
	        }
	        if (temp>total){
	            total=temp;
	        }
	        }
	        cout<<total<<"\n";
	    }
	}

