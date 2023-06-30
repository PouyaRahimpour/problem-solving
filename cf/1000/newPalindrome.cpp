#include<bits/stdc++.h>
#define ll long long
#define pii pair<int, int>
using namespace std;


int main() {
    int t; cin >> t;
    while (t--) {
        string s; cin >> s;
        set<char> chars;
        for (int i=0; i<s.length()/2; i++) chars.insert(s[i]);

        int cnt = chars.size();
        if (cnt>=2)
            cout << "YES\n";
        else cout << "NO\n";

    }

    return 0;
}

