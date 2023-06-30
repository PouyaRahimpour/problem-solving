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

ll calc(int x, int y) {
    ll m = max(x, y);
    ll cnt;
    if (m % 2==0) {
        if (x < y) {
            cnt = (m-1)*(m-1)+x;
        } else {
            cnt = m*m-y+1;

        }
    } else {
        if (x < y) {
            cnt = m*m-x+1;
        } else {
            cnt = (m-1)*(m-1)+y;
        }
    }
    return cnt;
}

int solve() {
    int x, y;
    cin >> x >> y;
    /*
    for (int i=1; i<=5; i++)
        for (int j=1; j<=5; j++)
            cout << calc(i, j) << " \n"[j==5];
    */
    ll cnt = calc(x, y);

    cout << cnt << "\n";

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


