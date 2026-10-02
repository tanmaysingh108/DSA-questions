#include <bits/stdc++.h>

using namespace std;

int main() {
	int t;
	cin>>t;
	for (;t>0;t--){
	    float t1,r1;
	    float t2,r2;
	    cin>>t1>>t2;
	    cin>>r1>>r2;
	    if(pow(t1,2)/pow(r1,3)==pow(t2,2)/pow(r2,3)){
	        cout<<"yes\n";
	    }
	    else 
	        cout<<"no\n";
	}

}
