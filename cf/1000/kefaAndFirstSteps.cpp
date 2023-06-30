#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

const int maxN = 1e5+20;
int a[maxN];
int dp[maxN];

int32_t main() {
    int n; cin >> n;
    for (int i=0; i<n; i++) {
        cin >> a[i];
    }
    dp[0] = 1;
    for (int i=1; i<n; i++) {
        if (a[i] >= a[i-1]) {
            dp[i] = dp[i-1] + 1;
        } else {
            dp[i] = 1;
        }
    }
    
    int maxi = 1;
    for (int i=0; i<n; i++) {
        if (maxi < dp[i]) {
            maxi = dp[i];
        }
    }

    cout << maxi << '\n';
    return 0;
}
