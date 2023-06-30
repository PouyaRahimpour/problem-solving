#include<bits/stdc++.h>
#define ll long long
#define pii pair<int, int>
using namespace std;
const int maxn = 1e2+10;
int a[maxn];
int main() {
    int tt; cin >> tt;
    while (tt--) {
        int n; cin >> n;
        for (int i=0; i<n; i++) cin >> a[i];
        sort(a, a+n);
        if (a[0] < 0) {cout << a[0] << "\n"; continue;}

        cout << a[n-1] << "\n";
    }

    return 0;
}

