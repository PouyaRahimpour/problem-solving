#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

const int maxN = 3e4 + 20;
int a[maxN];

int32_t main() {
    int n, t; cin >> n >> t;
    t--;
    for (int i = 0; i < n-1; i++) {
        cin >> a[i];
    }

    // from loc 0 to t
    int loc = 0;
    while (loc < t) {
        loc += a[loc];
    }

    if (loc == t) cout << "YES\n";
    else cout << "NO\n";


    return 0;
}
