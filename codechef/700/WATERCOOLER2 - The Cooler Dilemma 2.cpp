#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    int x,y;
    for (;t>0;t--){
        cin>>x;
        cin>>y;
        if (x>=y){
            cout<<0<<"\n";
        }
        else {
            if (y%x==0){
                cout<<((y/x)-1)<<"\n";
            }
            else{
                cout<<(y/x)<<"\n";
            }
}
}
}