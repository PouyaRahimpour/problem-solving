#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const ll INF = 1e9 + 10;
const int maxN = 4000 + 10;
int dp[maxN];

int32_t main() {
    int n, a, b, c, mini;
    cin >> n >> a >> b >> c;
    mini = min(a, min(b, c));
    dp[0] = 0;
    for (int i = 1; i <= n; i++) {
        if (i < mini) {
            dp[i] = -INF;
        } else if (i==mini) {
            dp[i] = 1;
        } else {
            int maxi = -INF;
            if (i-a >= 0) {
                maxi = max(maxi, dp[i-a]+1);
            }
            if (i-b >= 0) {
                maxi = max(maxi, dp[i-b]+1);
            }
            if (i-c >= 0) {
                maxi = max(maxi, dp[i-c]+1);
            }
            dp[i] = maxi;
            
        }
    }
    /*
    for (int i = 0; i <= n; i++) {
        cout << dp[i] << ", " ;
        
    }cout << endl;
    */
    

    cout << dp[n] << '\n';
    return 0;
}
