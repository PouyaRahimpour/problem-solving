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


const int mxn = 1e8+10;
int dp[mxn];
void solve() {
    memset(dp, 0, mxn);
    int m, k, a1, ak; cin >> m >> k >> a1 >> ak;
    if (m<=1ll*k*ak+a1) {
        cout << 0 << nl;
        return;
    }
    for (int i=k*ak+a1+1; i<=m; i++) {
        dp[i] = dp[i-1]+1;
        if (i-k>=0) {
            dp[i] = min(dp[i], dp[i-k]+1);
        }
    }

    cout << dp[m] << nl;
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


