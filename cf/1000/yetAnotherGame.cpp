#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int32_t main() {

    int t; cin >> t;
    while (t--) {
        string s;
        cin >> s;
        for (int i=0; i<(int)s.length(); i++) {
            if (i%2 == 0)  {
                if (s[i] == 'a') s[i] = 'b';
                else s[i] = 'a';
            } else {
                if (s[i] == 'z') s[i] = 'y';
                else s[i] = 'z';
                
            }
        }
        cout << s << '\n';
    }
    return 0;
}
