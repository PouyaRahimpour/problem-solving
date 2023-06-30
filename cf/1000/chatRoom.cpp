#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int32_t main() {
    string h = "hello";
    string s; cin>> s;
    int cnt = 0, j=0, i=0;
    bool found = true;
    
    while (j < s.length()) {
        if (s[j] == h[i]) {
            cnt++;
            i++;
//            cout << j << endl;
        } 
        j++;
    }
    if (cnt == 5) cout << "YES" << '\n';
    else cout << "NO" << '\n';

    return 0;
}
