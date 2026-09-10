#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int n;
        cin >> n;

        int A[n], B[n];

        for (int i = 0; i < n; i++)
            cin >> A[i];

        for (int i = 0; i < n; i++)
            cin >> B[i];

        sort(A, A + n);
        sort(B, B + n);

        int i = 0, j = 0;
        int current = 0;
        int ans = 0;

        while (i < n && j < n) {
            if (A[i] < B[j]) {
                current++;
                ans = max(ans, current);
                i++;
            }
            else {
                current--;
                j++;
            }
        }

        cout << ans << '\n';
    }

    return 0;
}