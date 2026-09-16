#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<long long> arr(n);
        long long total = 0;
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
            total += arr[i];
        }
        sort(arr.begin(), arr.end());
        long long sr = 0;      
        long long sb = total;  
        long long ans = 0;
        for (int i = 0; i < n / 2; i++) {
            sr += arr[i];
            sb -= arr[i];
        }
        for (int i = n / 2; i < n; i++) {
            int left = i;
            int right = n - i;
            long long current = sr * right + sb * left;
            ans = max(ans, current);
            sr += arr[i];
            sb -= arr[i];
        }
        cout << ans << '\n';
    }
}
