#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	int n;
	char s[105];
	int c;
	int d;
	for (;t>0;t--){
	    int i=0;
	    int final=0;
	    c=0;
	    cin >>n;
	    cin >>s;
	    d=n;
	    while (d>0){
	        if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u'){
	            c=0;
	        }
	        else if(s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U'){
	            c+=1;
	        }
	        else{
	            c+=1;
	        }
	        d-=1;
	        i+=1;
	    
	       if (c>=4){
	       cout<<"NO\n";
	       final=1;
	       break;
	       }}
	       if (final==0){
	       cout<<"Yes\n";
	       }
	
}
}
