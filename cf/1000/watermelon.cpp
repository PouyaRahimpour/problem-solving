#include<bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    string ans;
    if (n > 3 && n%2==0) ans = "YES";
    else ans = "NO";

    cout << ans << '\n';
    return 0;
}
