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

const int mxn = 3e5+10;
int c[mxn], a[mxn];
void solve() {
    int n; cin >> n;
    for (int i=0; i<n; i++) cin >> a[i];
    a[n] = INF;
    int lst = 0;
    int cnt = 1;
    int ans = 0;
    for (int i=0; i<n-1; i++) {
        if (a[i] < a[i+1]) {
            cnt++;
        } else {
            cnt = 1;
        }
        if (cnt%2==0) {
            debug(cnt);
            ans++;
        }

    }
    cout << ans << nl;
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


