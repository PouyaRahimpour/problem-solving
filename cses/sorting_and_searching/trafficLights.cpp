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

    int x, n; cin >> x >> n;
    set<array<int, 2>> s;
    set<array<int, 2>> ss;
    ss.insert({0, x});
    s.insert({x, 0});
    int tmp;
    for (int i=1; i<=n; i++) {
        cin >> tmp;
        auto it = ss.lower_bound({tmp, 0});
        it--;
        int before = (*it)[0];
        int after = (*it)[1];
        ss.insert({before, tmp});
        ss.insert({tmp, after});
        s.insert({tmp-before, before});
        s.insert({after-tmp, tmp});
        s.erase(s.lower_bound({after-before, before}));
        ss.erase(it);

        auto itt = s.end();
        itt--;
        cout << (*itt)[0] << " ";

    }
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


