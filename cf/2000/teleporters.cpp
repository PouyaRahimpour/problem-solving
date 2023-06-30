#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int maxn = 2e5+20;
int cost[maxn], a[maxn];
bool mark[maxn];


int main () {
    int tt; cin >> tt;
    while (tt--) {
        int n, c;
        cin >> n >> c;
        for (int i=0; i<n; i++) {
            cin >> cost[i];
            a[i] = cost[i] + i + 1;
        }

        int d = a[0];
        for (int i=1; i<n; i++)
            if (a[i] < d) d = a[i];
        mark[d] = true;

        if (d > c) {
            cout << 0 << "\n";
            continue;
        }
        // d is min of first
        ll sum = d;
        int cnt = 1;

        for (int i=n/2+1; i<n; i++) {
            a[i] -= i+1;
            a[i] += n-i;
        }
        sort(a, a+n);



        for (int i=0; i<n; i++) cout << a[i] << " " << "\n"[n!=n-1];


        for (int i=1; i<n && sum<=c; i++) {
            if (mark[a[i]]) continue;
            sum += a[i];
            cnt++;
        }

        cout << cnt << "\n";


    }

    return 0;
}
