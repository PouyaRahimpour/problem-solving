#include<bits/stdc++.h>
#define ll long long
#define pii pair<int, int>
using namespace std;
const int maxn = 2e5+20;
int a[maxn];

int main() {
    int tt; cin >> tt;
    while (tt--) {
        int n; cin >> n;
        for (int i=0; i<n; i++) cin >> a[i];
        sort(a, a+n);
        cout << 1 << "\n";

    }

    return 0;
}

