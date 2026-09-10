#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	for (;t>0;t--){
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
	    sort(A,A+n);
	    sort(B,B+n);
	    int max=0;
	    for (int i=0,c=1;i<n;i++,c++){
	        for (int j=0;j<n;j++){
	            if (A[i]>=B[j]){
	                B[j]=INT_MAX;
	                c--;
	            }
	        }
	        if (c>=max){
	            max=c;
	        }
	    }
	    cout<<max<<"\n";
	}

}
