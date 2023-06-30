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
    string a, b;
    cin >> a >> b;

    ll sum = 0;
    int d = b.length()-a.length();
    if (b.length()!=a.length()) {
        cout << "hey" << endl;
        int ind = 0;
        while (a.length()+ind<b.length()) {
            sum += abs(b[ind]-'0');
            ind++;
        }
        //cout << sum << endl;
        sum += 9*(b.length()-a.length());
    } else if (b.length()==a.length()){
        int ind = 0;
        while (ind<b.length() && abs(b[ind]-a[ind])==0) {
            ind++;
        }
        //cout << ind << endl;
        if (ind<b.length()) sum += abs(b[ind]-a[ind]);
        if (ind < b.length()-1) {
            ind++;
            sum += 9*(b.length()-ind);
        }
    }
    cout << sum << "\n";

    // 2000 88 -> 1909 90
    // 100 43 -> 99 50 = 15
    // 2345 856 -> 1999 1000 -> 27
    // 299090 909
    // 634 823 -> 690  809
    // 7634 7823 -> 7690  7809
    // 53 57 -> 50  49
    // 543 765 -> 2 9 9
    // 590 709


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


