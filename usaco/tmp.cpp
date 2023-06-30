/*
ID: poconut
TASK: ride
LANG: C++
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

void files() {
    freopen("ride.in", "r", stdin);
    freopen("ride.out", "w", stdout);
}

int solve() {
    files();
    string s, ss; cin >> s >> ss;
    ll sum1 = 1, sum2 = 1;
    for (int i=0; i<s.length(); i++) {
        sum1 *= s[i]-'A'+1;
        sum1 %= 47;
    }
    for (int i=0; i<ss.length(); i++) {
        sum2 *= ss[i]-'A'+1;
        sum2 %= 47;
    }
    //cout << sum1 << " " << sum2 << endl;
    if (sum1 == sum2) cout << "GO\n";
    else cout << "STAY\n";

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


