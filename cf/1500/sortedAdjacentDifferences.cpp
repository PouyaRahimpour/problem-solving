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


const int maxn=1e5+10;
int a[maxn];

int solve() {
    int n; cin >>  n;
    for (int i=0; i<n; i++) cin >> a[i];
    sort(a, a+n);
    //for (int i=0; i<n; i++) cout << a[i] << " \n"[i==n-1];

    vector<int> v;
    int j=0;
    for (int i=0; i<n; i+=2) {
        v.push_back(a[n-1-j]);
        v.push_back(a[j]);
        j++;
        //print(v);
    }

    for (int i=n-1; i>=0; i--) cout << v[i] << " \n"[i==0];






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


