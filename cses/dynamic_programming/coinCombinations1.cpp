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

const int mod=1e9+7;
int c[110];
const int maxx=1e6+10;
int dp[maxx];

int solve() {
    int n, x; cin >> n >> x;
    for (int i=0; i<n; i++) cin >> c[i];
    dp[0] = 1;
    for (int i=0; i<=x; i++) {
        for (int j=0; j<n; j++) {
            if (i+c[j]<=x) {
                dp[i+c[j]] += dp[i];
                dp[i+c[j]] %= mod;
            }
        }

    }
    //print(dp, x+1);
    cout << dp[x] << "\n";

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


