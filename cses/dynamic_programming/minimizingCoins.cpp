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

const int maxn=100+10;
int c[maxn];
const int maxm=1e6+10;
int dp[maxm];

int solve() {
    int n, m; cin >> n >> m;
    for (int i=0; i<n; i++) cin >> c[i];
    fill(dp, dp+m+5, 1e9);
    dp[0] = 0;
    for (int i=1; i<=m; i++) {
        for (int j=0; j<n; j++) {
            if (i-c[j]>=0) dp[i] = min(dp[i], dp[i-c[j]]+1);
        }
    }
    //print(dp, m+1);
    cout << (dp[m]>=1e9?-1:dp[m]) << "\n";



	return 0;
}

int main() {
	ios::sync_with_stdio(0); cin.tie(0);

	int T = 1;
	//cin >> T;
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


