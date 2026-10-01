#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	for(;t>0;t--){
	    string s,t,m;
	    cin>>s>>t;
	    for(int i=0;i<5;i++){
	        if (s[i]==t[i]){
	            m[i]='g';
	        }
	        else
	            m[i]='b';
	    }
	    for (int i=0;i<5;i++){
	        cout<<m[i];
	    }
	    cout<<"\n";
	}

}
