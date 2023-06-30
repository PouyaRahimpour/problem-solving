#include<bits/stdc++.h>
#define ll long long
#define pii pair<int, int>
using namespace std;

int main() {
    int tt; cin >> tt;
    while (tt--) {
        int n; cin >> n;
        string s; cin >> s;

        vector<char> ans;
        int x = 0;
        char tmp;
        while (x<n) {
            ans.push_back(s[x]);
            tmp = s[x];
            while (s[++x]!=tmp);
            x++;

        }
        for (int i=0; i<ans.size(); i++) {cout << ans[i];}
        cout << "\n";

    }

    return 0;
}

