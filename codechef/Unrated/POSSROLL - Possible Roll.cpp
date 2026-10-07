#include <bits/stdc++.h>
using namespace std;

int main() {
	int x,k,y;
	cin>>x>>k>>y;
	bool final=false;
	for (int i=1;i<=x;i++){
        if(y==k*i){
            final=true;
            break;
        }	    
	}
	if (final){
	    cout<<"yes\n";
	}
	else{
	    cout<<"no\n";
	}

}
