#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	for(;t>0;t--){
	    int n,x;
	    cin>>n>>x;
	    int k,m;
	    k=n/3;
	    m=n%3;
	    int total=x*(2*k+m);
	    cout<<total<<"\n";
	}

}
