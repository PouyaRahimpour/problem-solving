/**
 * created by: poconut(MPouya)
 */
#include <bits/stdc++.h>
using namespace std;
#define MOD 1000000007
#define MOD1 998244353
#define INF 2e9
#define nl " \n"
#define pb push_back
#define pf push_front
#define ppb pop_back
#define mp make_pair
#define ff first
#define ss second
#define PI 3.141592653589793238462
#define set_bits __builtin_popcountll
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()
typedef long double ld; typedef pair<int, int> pii; typedef long long ll; typedef unsigned long long ull; typedef long double ld;
#ifdef ONPC
#define fastio()
#define arrdebug(x, s) cout<< #x << ": ";_print(x, s); cout << endl;
#define debug(x) cout << #x <<": "; _print(x); cout << endl;
mt19937 rnd(chrono::steady_clock::now().time_since_epoch().count());
#else
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define debug(x)
#define arrdebug(x, s)
#endif
void _print(const int& t) {cout << t;} void _print(const ll& t) {cout << t;} void _print(const char& t) {cout << t;} void _print(const string& t) {cout << t;} void _print(const ld& t) {cout << t;} void _print(const double& t) {cout << t;}
template <class T, class V> void _print(const pair<T, V>& p) {cout << "{"; _print(p.ff); cout << ","; _print(p.ss); cout << "}";}
template <class T> void _print(const vector<T>& v) {cout << "[ "; for (T i : v) {_print(i); cout << " ";} cout << "]";}
template <class T> void _print(set<T>& v) {cout << "[ "; for (T i : v) {_print(i); cout << " ";} cout << "]";}
template <class T> void _print(const multiset<T>& v) {cout << "[ "; for (T i : v) {_print(i); cout << " ";} cout << "]";}
template <class T, class V> void _print(const map<T, V>& v) {cout << "[ "; for (auto i : v) {_print(i); cout << " ";} cout << "]";}
template <class T> void _print(const T& a, int s) { cout << "[ "; for (auto i: a) { if(!s--) break;_print(i); cout << " "; } cout << "]"; }
/*******************************************************************************/

const int maxn = 100+10;
int a[maxn][maxn];

int solve() {
    int n; cin >> n;
    debug(n);
    for (int i=0; i<n; i++) {
        string tmp;
        cin >> tmp;
        for (int k=0; k<(int)tmp.length(); k++) {
            a[i][k] = tmp[k]-'0';
        }
    }
    int t2 = a[0][n-1];
    for (int i=n-2; i>=0; i--) {
        a[0][i+1] = a[0][i];
    }
    for (int i=1; i<=n-1; i++) {
        a[i-1][0] = a[i][0];
    }
    for (int i=1; i<=n-1; i++) {
        a[n-1][i-1] = a[n-1][i];

    }
    for (int i=n-2; i>=1; i--) {
        a[i+1][n-1] = a[i][n-1];
    }
    a[1][n-1] = t2;
    /*
    */

    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            cout << a[i][j];
        }
        cout << nl;
    }



	return 0;
}

int main() {
    fastio();

	int T = 1;
	//cin >> T;
	while (T--) {
		if (solve()) {
			break;
		}
		#ifdef ONPC
        cout<<"__________"<<endl;
		#endif
	}
	#ifdef ONPC
    cout<<endl<<"finished in "<<clock()*1.0/CLOCKS_PER_SEC<<" sec"<<endl;
	#endif
    return 0;
}



