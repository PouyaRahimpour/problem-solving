#include<bits/stdc++.h>
#define ll long long
#define pii pair<int, int>
using namespace std;

int main() {
    int tt; cin >> tt;
    while (tt--) {
        int n, k; cin >> n >> k;

        if (log2(n)>=k) {
            n = (1<<k) -1;
        }
        ll ans = n+1;
        cout << ans << "\n";
    }


    return 0;
}

