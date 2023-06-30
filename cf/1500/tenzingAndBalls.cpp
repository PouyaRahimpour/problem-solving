/**
 * created by: MPouya
 */
#include <bits/stdc++.h>
using namespace std;
#define char unsigned char
#define ll long long
#define ld long double
#define pii pair<int, int>
#define pb push_back
#define pf push_front
#ifdef ONPC
#define _GLIBCXX_DEBUG
void print(const auto& ds, int len=1e9) {
    for (auto x: ds) {
        if (!(len--)) break;
        cout << x << " ";
    }
    cout << "\n";
}
mt19937 rnd(chrono::steady_clock::now().time_since_epoch().count());
#endif

const int maxn=2e5+20;
int a[maxn];
vector<int> b[maxn];
int dp[maxn];

int solve() {
    int n; cin >> n;
    fill(dp, dp+n+1, 1e9);
    for (int i=0; i<=n; i++) b[i].clear();

    for (int i=1; i<=n; i++) {
        cin >> a[i];
        b[a[i]].pb(i);
    }
    for (int i=1; i<=n; i++) sort(b[i].begin(), b[i].end());

    dp[n] = 1;
    dp[n+1] = 0;
    for (int i=n-1; i>=1; i--) {
        dp[i] = min(dp[i], dp[i+1]+1);

        auto it = lower_bound(b[a[i]].begin(), b[a[i]].end(), i+1);
        if (it != b[a[i]].end()) {
            int after = *it;
            //cout << "i: " << i << " afater: " << after << endl;
            dp[i] = min(dp[i], dp[after]);
            dp[i] = min(dp[i], dp[after+1]);
        }

    }
    //print(dp, n+1);

    cout << n-dp[1] << "\n";

	return 0;
}

int main() {
	ios::sync_with_stdio(0); cin.tie(0);

	int T = 1;
	cin >> T;
	while (T--) {
		if (solve()) {
			break;
		}
		#ifdef ONPC
			cout << "__________" << endl;
		#endif
	}
	#ifdef ONPC
		cerr << endl << "finished in " << clock() * 1.0 / CLOCKS_PER_SEC << " sec" << endl;
	#endif
    return 0;
}


