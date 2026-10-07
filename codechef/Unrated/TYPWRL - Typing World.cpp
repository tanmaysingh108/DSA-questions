#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    for (;t>0;t--){
    	int n,m;
    	cin>>n>>m;
    	string s;
    	string l;
    	cin>>s>>l;
    	int mr=0,ml=0;;
    	int cr=0,cl=0;
    	for (int i=0;i<n;i++){
    	    bool il=false;
    	    for(int j=0;j<m;j++){
    	        if (s[i]==l[j]){
    	            il=true;
    	            break;
    	        }
    	    }
    	    if (il){
    	        cl++;
    	        cr=0;
    	    }
    	    else{
    	        cr++;
    	        cl=0;
    	    }
    	    ml=max(ml,cl);
    	    mr=max(mr,cr);
    	}
    	int x=max(ml,mr);
    	cout<<x<<"\n";
    }
}
