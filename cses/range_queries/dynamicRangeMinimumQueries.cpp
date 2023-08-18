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

const int mxn = 2e5+10;
int t[4*mxn], a[mxn];
void bld(int v, int tl, int tr) {
    if (tl==tr) {
        t[v] = a[tl];
    } else {
        int tm = (tl+tr)/2;
        bld(2*v, tl, tm);
        bld(2*v+1, tm+1, tr);
        t[v] = min(t[2*v],t[2*v+1]);
    }
}
void upd(int v, int tl, int tr, int pos, int val) {
    if (tl==tr) {
        t[v] = val;
    } else {
        int tm= (tl+tr)/2;
        if (pos<=tm) {
            upd(2*v, tl, tm, pos, val);
        } else {
            upd(2*v+1, tm+1, tr, pos, val);
        }
        t[v] = min(t[2*v],t[2*v+1]);
    }

}
int qry(int v, int tl, int tr, int l, int r) {
    //cout << v << " " << tl << " " << tr << " " << " " << l << " " << r << nl;
    if (tl==l && tr==r) {
        return t[v];
    }
    if (r<tl || tr<l) return INF;

    int tm = (tl+tr)/2;
    if (r<=tm) {
        return qry(2*v, tl, tm, l, r);
    } else if (tm <l) {
        return qry(2*v+1, tm+1, tr, l, r);
    } else {
        return min(qry(2*v, tl, tm, l, tm),qry(2*v+1, tm+1, tr, tm+1, r));
    }
}

void solve() {
    int n, q; cin >> n >> q;
    for (int i=0; i<n;  i++) cin >> a[i];
    bld(1, 0, n-1);
    arrdebug(t, 30);
    while (q--) {
        int s, a, b;
        cin >> s >> a >> b;
        if (s==1) {
            a--;
            upd(1, 0, n-1, a, b);
            arrdebug(t, 30);
        } else {
            a--; b--;
            cout << qry(1, 0, n-1, a, b) << nl;
        }
    }
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


