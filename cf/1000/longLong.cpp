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


int solve() {
    int n; cin >> n;
    ll ans = 0;
    int cnt = 0, t;
    int lsign = 1, sign = 1;

    for (int i=0; i<n; i++) {
        cin >> t;
        sign = t==0?lsign:abs(t)/t;

        if (lsign*sign<0) cnt++;

        lsign = sign;

        ans += abs(t);
    }
    if (lsign <0) cnt++;

    cout << abs(ans) << " " << cnt/2 << "\n";



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


