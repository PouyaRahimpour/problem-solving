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
template <class T, class V> void _print(const map<T, V>& v) {cout << "[ "; for (auto i : v) {_print(i); cout << " ";} cout << "]";}
template <class T> void _print(const vector<T>& v) {cout << "[ "; for (T i : v) {_print(i); cout << " ";} cout << "]";}
template <class T> void _print(set<T>& v) {cout << "[ "; for (T i : v) {_print(i); cout << " ";} cout << "]";}
template <class T> void _print(const multiset<T>& v) {cout << "[ "; for (T i : v) {_print(i); cout << " ";} cout << "]";}
template <class T> void _print(const T& a, int s) { cout << "[ "; for (auto i: a) { if(!s--) break;_print(i); cout << " "; } cout << "]"; }
template <class T> void _print(queue<T>& q) { cout << "[ "; T x; stack<T> tmp; for (int i=0; i<q.size(); i++) { x = q.front(); q.pop(); tmp.push(x); q.push(x); } while (!tmp.empty()) { x = tmp.top(); tmp.pop(); _print(x); cout << " "; } cout << "]"; }
template <class T> void _print(stack<T>& s) { cout << "[ "; stack<T> tmp; T x; while (!s.empty()) { x = s.top(); s.pop(); tmp.push(x); } while (!tmp.empty()) { x = tmp.top(); tmp.pop(); _print(x); cout << " "; s.push(x); } cout << "]"; }
template <class T> void _print(deque<T>& dq) { cout << "[ "; T x; stack<T> tmp; for (int i=0; i<dq.size(); i++) { x = dq.front(); _print(x); cout << " "; dq.pop_front(); dq.pb(x); } cout << "]"; }
/*******************************************************************************/

const int maxn = 1e6;
vector<int> g[maxn];
bool vis[maxn];
stack<int> stk;

void bfs(int x) {
    queue<int> q;
    q.push(x);
    vis[x] = true;
    stk.push(x);
    while (!q.empty()) {
        int u = q.front();
        q.pop();
        for (int v: g[u]) {
            if (!vis[v]) {
                q.push(v);
                vis[v] = true;
                stk.push(v);
            }
        }
    }
}
int solve() {
    int n, m, k;
    cin >> n >> m >> k;

    vector<string> v;
    string x;
    for (int i=0; i<n+2; i++) x+='#';
    v.pb(x);

    string t;
    for (int i=1; i<=n; i++) {
        cin >> t;
        v.pb('#'+t+'#');
    }
    v.pb(x);

    for (int i=1; i<=n; i++) {
        for (int j=1; j<=m; j++) {
            if (v[i][j]=='.') {
                if (v[i][j+1]=='.') {
                    g[m*i+j].pb(m*i+(j+1));
                    g[m*i+(j+1)].pb(m*i+j);
                }
                if (v[i+1][j]=='.') {
                    g[m*i+j].pb(m*(i+1)+j);
                    g[m*(i+1)+j].pb(m*i+j);
                }
            }
        }
    }
    int a, b;
    bool cnd = false;
    for (a=1; a<=n&&!cnd; a++) {
        for (b=1; b<=m&&!cnd; b++) {
            if (v[a][b]=='.') {
                cnd = true;
                a--;
                break;
            }
        }
    }
    bfs(a*m+b);
    for (int i=0; i<k; i++) {
        int p = stk.top();
        debug(p);
        stk.pop();
        if (p%m!=0) {
            v[p/m][p%m] = 'X';
        } else {
            v[p/m -1][m] = 'X';
        }
    }

    for (int i=1; i<=n; i++) {
        for (int j=1; j<=m; j++) {
            cout << v[i][j];
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


