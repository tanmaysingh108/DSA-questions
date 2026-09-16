#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	for (;t>0;t--){
	    int n,k;
	    cin>>n;
	    cin>>k;
	    if (k>=n){
	        cout<<(k-n)*2<<"\n";
	    }
	    else{
	        cout<<0<<"\n";
	    }
    }
}
