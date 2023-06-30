#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int32_t main() {
    int t; cin >> t;
    while (t--) {
        int a, b, c;
         cin >> a >> b >> c;
         int t1 = min(min(a, b), c);
         int t2 = max(max(a, b) , c);
         if (a != t1 && a != t2) cout << a << '\n';
         else if (b != t1 && b != t2) cout << b << '\n';
         else if (c != t1 && c != t2) cout << c << '\n';
    }
    return 0; 
}
