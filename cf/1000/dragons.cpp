#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
#define pii pair<int, int>

const int maxN = 1000 + 20;
pii a[maxN];

int32_t main() {
    int s, n; cin >> s >> n;
    for (int i=0; i<n; i++) cin >> a[i].first >> a[i].second;


    sort(a, a+n);

    int cnt = 0, i = 0;
    while (i<n && s > a[i].first) {
        s += a[i].second;
        i++;
        cnt++;
    }
    if (cnt == n) cout << "YES" << '\n';
    else cout << "NO" << '\n';


    return 0;
}
