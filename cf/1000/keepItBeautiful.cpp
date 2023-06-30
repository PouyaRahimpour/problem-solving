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
    int q; cin >> q;
    int d = 0, t, last, first;
    string s;
    cin >> t;
    last = t;
    first = t;
    s+= '1';
    for (int i=1; i<q; i++) {
        cin >> t;
        if (t>=last && d<1) {
            s+='1';
            last = t;
        }
        else if (t<last && d<1) {
            if (t<=first) {
                d++;
                s+='1';
                last = t;
            } else {
                s+='0';
            }
        }
        else if (t>=last && d>=1) {
            if (t<=first) {
                s+='1';
                last = t;
            } else {
                s+='0';
            }
        }
        else if (t <last && d>=1) {
            s+='0';
        }
    }
    cout << s << "\n";

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


