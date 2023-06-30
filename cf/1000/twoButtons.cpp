#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
#define pb push_back
#define pii pair<int, int>

const int maxN = 5e4+20;
vector<int> g[maxN];
bool mark[maxN];

int bfs(int a, int b) {
    if (a > b) return a-b;
    queue<pii> q;
    pii x = {a, 0};
    mark[a] = true;
    q.push(x);
    while (!q.empty()) {
        x = q.front();
        q.pop();
        if (x.first == b) return x.second;
        for (int i: g[x.first]) {
            if (!mark[i]) {
                q.push({i, x.second+1});
                mark[i] = true;
            }        
        }
    }
    return -1;
}
int32_t main() {
    int n, m;
    cin >> n >> m;
    //         1
    //      0    2
    //             4
    //           3   8
    //            6 7 16

    for (int i=1; i<=2*m; i++) {
        g[i].pb(2*i);
        g[i].pb(i-1);
    }

    int ans = bfs(n, m);
    cout << ans << endl;

    return 0;
}
