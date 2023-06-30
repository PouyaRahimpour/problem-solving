/**
 * created by: MPuya
 */
#include <bits/stdc++.h>
using namespace std;
#define char unsigned char
#define ll long long
#define ld long double
#define pii pair<int, int>
#define pb push_back
#define pf push_front
#define first f
#define second s
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


const int maxn = 2e5;
int a[maxn], b[maxn];

int solve() {
    int n, m, k; cin >> n >> m >> k;
    for (int i=0; i<n; i++) {cin >> a[i];}
    for (int i=0; i<m; i++) {cin >> b[i];}
    sort(a, a+n); sort(b, b+m);

    int cnt = 0;
    int j=0;
    for (int i=0; i<m; i++) {
        int ind = lower_bound(a+j, a+n, b[i]-k)-a;
        if (ind >= n) break;
        if (a[ind] <= b[i]+k) {
            cnt++;
            j=ind+1;
        }
    }
    cout << cnt << "\n";







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


