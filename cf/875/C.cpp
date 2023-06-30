#include<bits/stdc++.h>
#define ll long long
#define pii pair<int, int>
using namespace std;
const int maxn = 2e5+10;
vector<int> tree[maxn];
set<int> s;

bool nbr(int x, int y) {
    for (int u: tree[x]) {
        if (u==y) return true;
    }
    return false;
}

void make(int x) {
    set<int> s2;
    if (s.count(x) != 0) return;
    for (int j: tree[x])
        if (s.count(j) > 0) {s2.insert(x); break;}
    for (int i: s2) {s1.insert(i);}
    for (int i: s2) {make(i);}
}
int main() {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        int a, b;
        for (int i=0; i<n; i++) {
            cin >> a >> b;
            a--; b--;
            tree[a].push_back(b);
            tree[b].push_back(a);
        }
        s1.insert(0);
        ll cnt = 0;
        while (s1.size() < n) {
            for (int i=0; i<n; i++) {
                make(i);
            }
            cnt++;
            for (int x: s2) {s1.insert(x); cout << x << " ";}
            cout << endl;
            s2.clear();

        }
        cout << cnt << endl;



    }


    return 0;
}

