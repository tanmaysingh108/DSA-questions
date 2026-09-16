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

        long long sr = 0;       // sum of left part
        long long sb = total;  // sum of right part
        long long ans = 0;

        // Initially split at n/2
        for (int i = 0; i < n / 2; i++) {
            sr += arr[i];
            sb -= arr[i];
        }

        for (int i = n / 2; i < n; i++) {
            int left = i;
            int right = n - i;

            long long current = sr * right + sb * left;
            ans = max(ans, current);

            // Move arr[i] from right to left
            sr += arr[i];
            sb -= arr[i];
        }

        cout << ans << '\n';
    }
}