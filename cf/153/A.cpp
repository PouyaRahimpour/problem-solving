/**
 * created by: poconut(MPouya)
 */
#include <bits/stdc++.h>
using namespace std;
#define MOD 1000000007
#define MOD1 998244353
#define nl "\n"
#define INF 2e9
#define pb push_back
#define pf push_front
#define ppb pop_back
#define ppf pop_front
#define mp make_pair
#define ff first
#define ss second
#define PI 3.141592653589793238462
#define set_bits __builtin_popcountll
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()
#define ar array
#define lb lower_bound
#define ub upper_bound
#define tostr to_string
typedef string str; typedef long double ld; typedef long long ll; typedef vector<int> vi; typedef vector<ll> vl; typedef pair<int, int> pii; typedef pair<ll, ll> pll; typedef vector<pii> vpii; typedef vector<pll> vpll;
#ifdef ONPC
#include "/home/pouya/cp.cpp"
#else
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define debug(...)
#define arrdebug(...)
#define delay()
#define LINE
#define TIME
#endif
/*******************************************************************************/

bool reg(str s) {
    stack<char> ds;
    for (char c: s) {
        if (c=='(')
            ds.push(c);
        else if (!ds.empty() && ds.top()=='(') {
            ds.pop();
        } else return false;
    }
    return sz(ds)==0;
}
void solve() {
    str s; cin >> s;
    int n = s.length();
    if (s=="()") {
        cout << "NO" << nl;
    } else {
        cout << "YES" << nl;
        int same = 0;
        for (int i=1; i<n; i++) {
            if (s[i]!=s[i-1]) {
                same++;
            }
        }
        debug(same);
        if (same!=n-1) {
            for (int i=0; i<n; i++) {
                cout << "()";
            }
        } else {
            for (int i=0; i<n; i++) {
                cout << '(';
            }
            for (int i=0; i<n; i++) {
                cout << ')';
            }
        }
        cout << nl;
    }
}

int main() {
    fastio();
	int T = 1;
	cin >> T;
	while (T--) {
        solve();
        LINE
	}
    TIME
    return 0;
}


