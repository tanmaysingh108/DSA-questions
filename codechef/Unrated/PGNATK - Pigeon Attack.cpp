#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	for(;t>0;t--){
	    int n,k;
	    cin>>n>>k;
	    int sum=n;
	    while (true){
	        if(n-k<0){
	            cout<<sum<<"\n";
	            break;
	        }
	        else if(n-k>=0){
	            sum++;
	            n=n-k+1;
	        }
	    }
	}

}
