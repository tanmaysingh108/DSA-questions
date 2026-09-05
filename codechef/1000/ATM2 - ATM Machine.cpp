#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	for (;t>0;t--){
	    int n,k;
	    cin>>n;
	    cin>>k;
	    std::string str1;
	    int arr[n];
	    int d=n;
	    int i=0;
	    for (;d>0;d--){
	        cin>>arr[i];
	        i++;
	    }
	    i=0;
	    d=n;
	    for (;d>0;d--){
	        if (k>=arr[i]){
	            str1+="1";
	            k=k-arr[i];
	        }
	        else if (k<arr[i]){
	            str1+="0";
	        }
	        i+=1;
	    }
	    cout<<str1<<"\n";
	}

}
