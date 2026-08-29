#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    int a,b,c,x;
    for (T;T>0;T--)
    {
	    cin >> a;
	    cin >> b;
	    cin >> c;
	    cin >> x;
	    if ((a+b>=x) || (b+c>=x) || (c+a>=x)){
	        cout << "Yes\n";
	    }
	    else{
	        cout << "no\n";
	    }
    }    
}
