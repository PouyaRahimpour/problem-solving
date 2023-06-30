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

const int maxn = 50+10;
int a[maxn], b[maxn];

int solve() {
    int n, m; cin >> n >> m;
    string fp = "Tsondu", sp = "Tenzing", eq = "Draw";
    ll s1=0, s2 =0;
    for (int i=0; i<n; i++) {cin >> a[i]; s1+=a[i];}
    for (int i=0; i<m; i++) {cin >> b[i]; s2+=b[i];}

    if (s1 > s2)
    cout << fp << "\n";
    else if (s2>s1)
    cout << sp << "\n";
    else cout << eq << "\n";


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


