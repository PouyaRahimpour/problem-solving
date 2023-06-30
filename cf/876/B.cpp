#include<bits/stdc++.h>
#define ll long long
#define pii pair<int, int>
using namespace std;
const int inf = 1e9+10;
const int maxn = 2e5+10;
pii lamps[maxn];

int main() {
    int tt; cin >> tt;
    while (tt--) {
        int n; cin >> n;
        for (int i=0; i<n; i++) cin >> lamps[i].first >> lamps[i].second;
        sort(lamps, lamps+n);
        ll ans = 0, x = lamps[n-1].first;
        for (int i=1; i<=n; i++) {
            if (i > x) break;
            int ind = upper_bound(lamps, lamps+n, make_pair(i, inf))-lamps-1;
            for (int j=0; j<i; j++) {
                if (lamps[ind].first != i) break;
                ans += lamps[ind--].second;
            }
        }
        cout << ans << "\n";
    }
    // 2 1 1  1
    // 2 6 10 13
    // 15
    //
    // 3 3 2 3 3
    // 4 1 5 2 3
    // you should turn on max lamp 1
    // 14
    //
    // 1 3 1 3 3 2
    // 2 4 4 4 5 3
    // 20
    //



    return 0;
}

