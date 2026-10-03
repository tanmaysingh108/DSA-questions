#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	for (;t>0;t--){
	    int n;
	    cin>>n;
	    vector<int> a;
	    vector<int> b;
	    
	    for (int i=0;i<n;i++){
	        int x;
	        cin>>x;
	        b.push_back(x);
	    }
	    
	    int first=0;
	    int final=(first+b[0])%2;
	    for (int i=1;i<n-1;i++){
	        final=(final+b[i])%2;
	    }
	    
	    if ((final+b[n-1])%2==first){
	        cout<<"yes\n";
	    }
	    else
	        cout<<"no\n";
	    
	}

}
