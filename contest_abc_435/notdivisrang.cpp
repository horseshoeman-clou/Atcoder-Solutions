#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    long long ans = 0;

    for (int l = 0; l < n; l++) {
        for (int r = l; r < n; r++) {
            long long sum = 0;
            for (int i = l; i <= r; i++) sum += a[i];

            bool ok = true;
            for (int i = l; i <= r; i++) {
                if (sum % a[i] == 0) {
                    ok = false;
                    break;
                }
            }

            if (ok) ans++;
        }
    }

    cout << ans << '\n';
    return 0;
}

