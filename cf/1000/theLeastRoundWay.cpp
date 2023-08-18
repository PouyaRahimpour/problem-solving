/**
 * created by: poconut(MPouya)
 */
#include <bits/stdc++.h>
using namespace std;
#define MOD 1000000007
#define MOD1 998244353
#define INF 2e9
#define nl "\n"
#define pb push_back
#define pf push_front
#define ppb pop_back
#define ppf pop_front
#define mp make_pair
#define F first
#define S second
#define PI 3.141592653589793238462
#define set_bits __builtin_popcountll
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()
typedef long double ld; typedef pair<int, int> pii; typedef long long ll; typedef unsigned long long ull; typedef long double ld;
#ifdef ONPC
#define fastio()
#define arrdebug(x, s) cout<< #x << ": ";_print(x, s); cout << endl;
#define debug(x) cout << #x <<": "; _print(x); cout << endl;
#define LINE cout << "__________" << endl;
#define TIME cout<<endl<<"finished in "<<clock()*1.0/CLOCKS_PER_SEC<<" sec"<<endl;
mt19937 rnd(chrono::steady_clock::now().time_since_epoch().count());
#else
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define debug(x)
#define arrdebug(x, s)
#define LINE
#define TIME
#endif
void _print(const int& t) {cout << t;} void _print(const ll& t) {cout << t;} void _print(const char& t) {cout << t;} void _print(const string& t) {cout << t;} void _print(const ld& t) {cout << t;} void _print(const double& t) {cout << t;}
template <class T> void _print(const T& a, int s) { cout << "[ "; for (auto i: a) { if(!s--) break;_print(i); cout << " "; } cout << "]"; }
template <class T, class V> void _print(const pair<T, V>& p) {cout << "{"; _print(p.ff); cout << ","; _print(p.ss); cout << "}";}
template <class T, class V> void _print(const map<T, V>& v) {cout << "[ "; for (auto i : v) {_print(i); cout << " ";} cout << "]";}
template <class T> void _print(const vector<T>& v) {cout << "[ "; for (T i : v) {_print(i); cout << " ";} cout << "]";}
template <class T> void _print(const set<T>& v) {cout << "[ "; for (T i : v) {_print(i); cout << " ";} cout << "]";}
template <class T> void _print(const multiset<T>& v) {cout << "[ "; for (T i : v) {_print(i); cout << " ";} cout << "]";}
template <class T> void _print(queue<T>& q) { cout << "[ "; T x; stack<T> tmp; for (int i=0; i<q.size(); i++) { x = q.front(); q.pop(); tmp.push(x); q.push(x); } while (!tmp.empty()) { x = tmp.top(); tmp.pop(); _print(x); cout << " "; } cout << "]"; }
template <class T> void _print(stack<T>& s) { cout << "[ "; stack<T> tmp; T x; while (!s.empty()) { x = s.top(); s.pop(); tmp.push(x); } while (!tmp.empty()) { x = tmp.top(); tmp.pop(); _print(x); cout << " "; s.push(x); } cout << "]"; }
template <class T> void _print(deque<T>& dq) { cout << "[ "; T x; stack<T> tmp; for (int i=0; i<dq.size(); i++) { x = dq.front(); _print(x); cout << " "; dq.pop_front(); dq.pb(x); } cout << "]"; }
/*******************************************************************************/

const int mxn = 1000+10;
int n, a[mxn][mxn];
ll dp[mxn][mxn];
int zero(ll x) {
    int cnt =0;
    while (x%10==0 && cnt<10) {
        x/=10;
        cnt++;
    }
    return cnt;
}
string dd[mxn][mxn];

void solve() {
    cin >> n;
    for (int i=0; i<n; i++)
        for (int j=0; j<n; j++)
            cin >> a[i][j];

    dp[0][0] = a[0][0];
    for (int i=1; i<n; i++) {
        dp[0][i] = dp[0][i-1]*a[0][i];
        dd[0][i] = dd[0][i-1]+"R";

    }
    for (int i=1; i<n; i++) {
        dp[i][0] = dp[i-1][0]*a[i][0];
        dd[i][0] = dd[i-1][0]+"D";
    }
    for (int i=1; i<n; i++)
        for (int j=1; j<n; j++) {
            if (zero(dp[i-1][j]*a[i][j]) < zero(dp[i][j-1]*a[i][j])) {
                dp[i][j] = dp[i-1][j]*a[i][j];
                dd[i][j] = dd[i-1][j]+"D";
            } else {
                dp[i][j] = dp[i][j-1]*a[i][j];
                dd[i][j] = dd[i][j-1]+"R";
            }
        }


    for (int i=0; i<n; i++)
        for (int j=0; j<n; j++)
            cout << dp[i][j] << " \n"[j==n-1];

    cout << zero(dp[n-1][n-1]) << nl;
    for (char c:dd[n-1][n-1]) {
        cout << c;
    }
    cout << nl;
    /*
    */


}

int main() {
    fastio();
	int T = 1;
	//cin >> T;
	while (T--) {
        solve();
        LINE
	}
    TIME
    return 0;
}

