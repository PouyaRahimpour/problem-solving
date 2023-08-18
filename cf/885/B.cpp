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

const int maxn = 2e5+20;
int a[maxn];
vector<int> lsts[maxn];
vector<int> dis[maxn];
int n, k;

int solve() {
    cin >> n >> k;
    for (int i=0; i<n; i++) {
        cin >> a[i];
        a[i]--;
    }
    for (int i=0; i<k; i++) {
        dis[i].clear();
        lsts[i].clear();
        lsts[i].pb(-1);
    }

    for (int i=0; i<n; i++) {
        lsts[a[i]].pb(i);
    }
    for (int i=0; i<k; i++) {
        lsts[i].pb(n);
    }


    for (int i=0; i<k; i++) {
        for (int j=1; j<lsts[i].size(); j++) {
            dis[i].pb(lsts[i][j]-lsts[i][j-1]-1);
        }
    }

    for (int i=0; i<k; i++) {
        sort(dis[i].rbegin(), dis[i].rend());
    }
    arrdebug(dis, k);
    int mn = INF;
    for (int i=0; i<k; i++) {
        if (!dis[i].empty()) {
            mn = min(mn, max(dis[i][0]/2, dis[i][1]));
        }
    }
    cout << mn << nl;
    /*
    */







	return 0;
}

int main() {
    fastio();

	int T = 1;
	cin >> T;
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


