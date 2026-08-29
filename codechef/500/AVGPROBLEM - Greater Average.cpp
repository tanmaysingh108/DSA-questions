#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    double a,b,c;
    while (T--){
        cin >> a;
        cin >> b;
        cin >> c;
        if (((a+b)/2)>c){
            cout << "Yes\n";
        }
        else{
            cout << "No\n";
        }
    }
}
