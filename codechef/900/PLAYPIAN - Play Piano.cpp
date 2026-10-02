#include <bits/stdc++.h>
#include <cmath>

using namespace std;

int main() {
	int t;
	cin>>t;
	for (;t>0;t--){
	    string s;
	    cin>>s;
	    int n=s.size();
	    int ca,cb;
	    ca=0;
	    cb=0;
	    bool final=true;
	    for(int i=0;i<n;i++){
	        if(s[i]=='A')
	            ca++;
	        else if(s[i]=='B')
	            cb++;
	        if (abs(ca-cb)>1){
                final=false;
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

}
