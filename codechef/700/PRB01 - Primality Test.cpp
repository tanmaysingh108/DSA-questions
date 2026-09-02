#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    int n,c;
    int d;
    for (;t>0;t--){
        cin >> n;
        c=0;
        d=1;
        while (d<=n){
            if (n%d==0){
                c+=1;
            }
            d+=1;
            if (c>2){
                c=c+1;
            cout << "No\n";
            break;
        }
            }
            if (c==2){
                cout << "Yes\n";
            }
            else if (c==1){
                cout << "No\n";
            }
    }
}
