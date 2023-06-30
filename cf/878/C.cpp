#include<bits/stdc++.h>
#define ll long long
#define pii pair<int, int>
using namespace std;
const int maxn=2e5+10;
ll a[maxn];

int main() {
    int tt; cin >> tt;
    while (tt--) {
        ll n, k, q;
        cin >> n >> k >> q;
        for (int i=0; i<n; i++) cin >> a[i];

        ll lastlen = 0;
        ll sum = 0;
        for (int i=0; i<n; i++) {
            if (a[i] > q) {
                if (lastlen >= k) {
                    ll cnt = lastlen-k+1;
                    sum += (cnt*(cnt+1))/2;
                }
                lastlen = 0;
            }
            else {
                lastlen++;
            }
            //cout << lastlen << endl;

        }
        if (lastlen >= k) {
            ll cnt = lastlen-k+1;
            sum += (cnt*(cnt+1))/2;
        }
        cout << sum << "\n";
    }
    return 0;
}

