#include <bits/stdc++.h>
using namespace std;

int main() {
	int T;
	cin >> T;
	int n,x;
	int c;
	for (;T>0;T--){
	    cin >> n;
	    cin >> x;
	    if (n%6==0){
	        c=n/6;
	    }
	    else{
	        c=(n/6)+1;
	    }
	    cout << (c*x) << "\n";
	}
	return(0);
}
