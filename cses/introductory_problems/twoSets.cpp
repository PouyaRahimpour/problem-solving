#include<bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    if ((n*(n+1)/2)%2) {
        cout << "NO" << "\n";
        return 0;
    }

    // sum should be n*(n+1)/4
    int s = n*(n+1)/4;
    cout << s << "\n";
    // 1 2 3 4 5 6 7 8 -> 1 2 4 8 3
    vector<int> v1, v2;
    int sum = 0;
    int x = 0;

    while (1<<x < s) {
        if (s & 1 << x) {
            v1.push_back(1<<x);
            sum += 1 << x;
        }
    }
    for (int i: v1) cout << i << " ";
    if (s - sum > 0) v1.push_back(s - sum);
    x = 1;
    for (int i=0; i<v1.size(); i++) {
        while (x < v1[i]) {
            v2.push_back(x++);
        }
        x++;
    }
    x++;
    while (x <= n) {v2.push_back(x);}

    cout << v1.size() << "\n";
    for (int i: v1) cout << i << " ";
    cout << v2.size() << "\n";
    for (int i:v2) cout << i << " ";

    return 0;
}
