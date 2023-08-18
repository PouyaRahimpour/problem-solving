#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(string s1) {
    string s2;
    cin >> s2;

    if (s1.length()!=s2.length()) {
        cout << "[\n]" << endl;
        return;
    }

    int n = s1.length();
    ll x = ((1<<(2*n+1))-1) - ((1<<(n+1))-1);
    for (int i=(1<<




}
int main() {
    string s;
    while (cin >> s) {
        solve(s);
    }
    return 0;
}
