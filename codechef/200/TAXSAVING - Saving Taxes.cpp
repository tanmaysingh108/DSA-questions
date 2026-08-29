#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int T,x,y;
    cin >> T;
    while (T>0){
        cin >> x;
        cin >> y;
        int _amount;
        _amount= x-y;
        cout << _amount <<"\n";
        T=T-1;
    }
    return(0);
}
