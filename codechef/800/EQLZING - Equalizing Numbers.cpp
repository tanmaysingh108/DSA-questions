#include <bits/stdc++.h>
#include <cmath>

using namespace std;

int main() {
	int t;
	cin>>t;
	for (;t>0;t--){
	    int A,B;
	    cin>>A>>B;
	    if (abs(A-B)%2)
	        cout<<"no\n";
	    else
	        cout<<"yes\n";
	}

}
