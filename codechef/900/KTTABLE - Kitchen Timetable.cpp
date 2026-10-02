#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	for (;t>0;t--){
	    int n;
	    cin>>n;
	    vector<int> A;
	    vector<int> B;
	    for (int i=0;i<n;i++){
	        int x;
	        cin>>x;
	        A.push_back(x);
	    }
	    for (int i=0;i<n;i++){
	        int x;
	        cin>>x;
	        B.push_back(x);
	    }
	    vector<int> C;
	    C.push_back(A[0]);
	    for (int i=1;i<n;i++){
	        C.push_back(A[i]-A[i-1]);
	    }
	    int count=0;
	    for (int i=0;i<n;i++){
	        if(B[i]<=C[i]){
	            count++;
	        }
	    }
	    cout<<count<<"\n";
	}
}
