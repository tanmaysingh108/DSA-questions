#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	for(;t>0;t--){
	    int n,k;
	    cin>>n>>k;
	    int day=((k-1)/5)+1;
	    int total=((n-1)/5)+1;
	    cout<<(total-day)<<"\n";
	}

}
