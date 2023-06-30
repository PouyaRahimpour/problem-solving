/*
ID: poconut
TASK: test
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
    freopen("test.in", "r", stdin);
    freopen("test.out", "w", stdout);
}

int solve() {
    files();
    int m1, m2, m3, c1, c2, c3;
    cin >> c1 >> m1;
    cin >> c2 >> m2;
    cin >> c3 >> m3;

    //cout << "initial: ";
    //cout << m1 << " " << m2 << " " << m3 << "\n";
    int amount;
    for (int i=0; i<100; i++) {
        //cout << i+1 << ". ";
        switch (i%3) {
            case 0:
                amount = min(m1, c2-m2);
                m2 += amount;
                m1 -= amount;
            break;
             case 1:
                amount = min(m2, c3-m3);
                m3 += amount;
                m2 -= amount;
                break;
             case 2:
                amount = min(m3, c1-m1);
                m1 += amount;
                m3 -= amount;
            break;
        }
    }
    cout << m1 << " " << m2 << " " << m3 << "\n";

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


