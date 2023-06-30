#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int maxN = 1e5+20;
vector<int> g[maxN];
int edge[maxN];
int level[maxN];
int parent[maxN];
bool mark[maxN];
int edgenum[maxN];

int bfs(int src) {
    queue<int> q;
    level[src] = 0;
    q.push(src);
    mark[src] = true;
    parent[src] = -1;
    while (!q.empty()) {
        int t = q.front();
        q.pop();
        for (int i: g[t]) {
            if (!mark[i]) {
                q.push(i);
                mark[i] = true;
                level[i] = level[t]+1;
                parent[i] = t;
            }
        }
        
    }
    return -1;
    
}
int lca(int a, int b) {
    if (level[b] > level[a]) swap(a, b);
    while (level[a] > level[b]) {
        edge[a]++;
        a = parent[a];
    }


    while (a != b) {
        edge[a]++; edge[b]++;
        a = parent[a];
        b = parent[b];
    }
    return a;

}
int32_t main() {
    int n; cin >> n;
    int a, b;
    for (int i=0; i<n-1; i++) {
        cin >> a >> b;
        a--; b--;
        g[a].push_back(b);
        g[b].push_back(a);
        edgenum[i] = max(a, b);
    }
    memset(edge, 0, sizeof(edge));

    bfs(0);
    int k; cin >> k;
    for (int i=0; i<k; i++) {
        cin >> a >> b;
        a--; b--;
        lca(a, b);
    }
    for (int i=0; i<n; i++) {
        cout << edgenum[i] << " ";
        cout << edge[edgenum[i]] << '\n';
    }
    
    return 0;
}
