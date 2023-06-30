#include<bits/stdc++.h>
#define ll long long
#define pii pair<int, int>
using namespace std;
const int maxn = 100+10;
int a[maxn];

int main() {
    int tt; cin >> tt;
    while (tt--) {
        int n, k;
        for (int i=0; i<n; i++) a[i] = 0;
        cin >> n >> k;
        int p1 = 0; int p2 = n-1;
        while (p1<=p2) {
            a[p1] = 1;
            p1 += k;
            a[p2] = 1;
            p2 -= k;
        }
        int ans = 0;
        if (2*k > n) a[p2] = 1;
        for (int i=0; i<n; i++)
            if (a[i] == 1) ans++;
        //for (int i=0; i<n; i++) cout << a[i] << " \n"[i==n-1];
        cout << ans << "\n";


    }


    return 0;
}
