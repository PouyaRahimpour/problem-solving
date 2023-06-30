#include<bits/stdc++.h>
#define ll long long
#define pii pair<int, int>
using namespace std;

int main() {
    int tt; cin >> tt;
    while (tt--) {
        int n, k;
        cin >> n >> k;
        int ans = 1+ceil((double)(n-1)/k);
        cout << ans << "\n";
    }

    return 0;
}

