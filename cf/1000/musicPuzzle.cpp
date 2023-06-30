#include<bits/stdc++.h>
#define ll long long
#define pii pair<int, int>
using namespace std;

int main() {
    int tt; cin >> tt;
    while (tt--) {
        int n; cin >> n;
        string m; cin >> m;
        set<string> s;
        for (int i=0; i<n-1; i++) {
            string x = to_string(m[i])+to_string(m[i+1]);
            s.insert(x);
        }
        cout << s.size() << "\n";
    }

    return 0;
}

