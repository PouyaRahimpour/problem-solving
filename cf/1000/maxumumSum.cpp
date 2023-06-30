#include<bits/stdc++.h>
#define ll long long
#define pii pair<int, int>
using namespace std;
const int maxn = 2e5+10;
int a[maxn];
ll sum[maxn+1];

int main() {
    int t; cin >> t;
    while (t--) {
        int n, k; cin >> n >> k;
        for (int i=0; i<n; i++) cin >> a[i];
        sort(a, a+n);
        for (int i=0; i<n; i++) sum[i+1] = a[i];
        sum[0] = 0;
        for (int i=1; i<n+1; i++) sum[i] += sum[i-1];
        ll maxsum = -1;

        for (int i=0; i<=k; i++) {
            maxsum = max(maxsum, sum[n-(k-i)]-sum[2*i]);

        }
        cout << maxsum << "\n";
    }

    return 0;
}

