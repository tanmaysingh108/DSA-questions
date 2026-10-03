#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	for (;t>0;t--){
	    vector<int> a;
	    vector<int> b;
	    for (int i=0;i<3;i++){
	        int x;
	        cin>>x;
	        a.push_back(x);
	    }
	    for (int i=0;i<3;i++){
	        int x;
	        cin>>x;
	        b.push_back(x);
	    }
	    bool tie=true;
	    int totala=accumulate(a.begin(), a.end(),0);
	    int totalb=accumulate(b.begin(),b.end(),0);
	    if (totala>totalb){
	        cout<<"dragon\n";
	    }
	    else if (totalb>totala)
	        cout<<"sloth\n";
	    else if (totala==totalb){
	       for (int i=0;i<3;i++){
	           if (a[i]>b[i]){
	               cout<<"dragon\n";
	               tie=false;
	               break;
	           }
	           else if(a[i]<b[i]){
	               cout<<"sloth\n";
	               tie=false;
	               break;
	           }
	       }
	       if (tie){
	           cout<<"tie\n";
	       }
	   }
	    
}
}
