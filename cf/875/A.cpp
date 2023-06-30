#include<bits/stdc++.h>
#define ll long long
#define pii pair<int, int>
using namespace std;
const int maxn = 1e2+10;
int a[maxn];
int b[maxn];

int main() {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        for (int i=0; i<n; i++) cin >> a[i];

        for (int i=0; i<n; i++) cout << n+1-a[i] << " ";
        cout << "\n";




    }

    return 0;
}

