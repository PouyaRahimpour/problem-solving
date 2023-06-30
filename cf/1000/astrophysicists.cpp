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
    ll n, k, g; cin >> n >> k >> g;
    ll p = ceil(g/2.0)-1;
    if (p==0) {
        cout << 0 << "\n";
        return 0;
    }

    //cout << p << endl;
    ll x = ((k*g)/p);
    if (x > n-1) x = (n-1)*p;
    else x = p*x;
    //cout << x << endl;
    ll other = k*g-x;
    //cout << other << endl;
    ll pay = other%g>=(p+1)? other+g-(other%g): other-(other%g);
    cout << k*g-pay << "\n";

    //49 49 202 -> 0 0 202+100-2;

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


