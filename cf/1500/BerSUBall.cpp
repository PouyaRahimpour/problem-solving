#include<bits/stdc++.h>
using namespace std;
const int maxn = 100 + 10;
const int maxm = 100 + 10;
int b[maxn], g[maxm];


int main() {
    int n; cin >> n;
    for (int i=0; i<n; i++) cin >> b[i];
    int m; cin >> m;
    for (int i=0; i<m; i++) cin >> g[i];
    // 1 2 3
    // 2 4 5
    // greedy doesn't work
    // BUT we can still sort that's no bad
    // 1 2 4 6
    // 1 5 5 7 9
    //
    // 4 4 4 5
    // 2 3 4 4 5
    sort(b, b+n);
    sort(g, g+m);
    /*
    for (int i=0; i<n; i++) cout << b[i] << " ";
    cout << endl;
    for (int i=0; i<m; i++) cout << g[i] << " ";
    cout << endl;
    */
    int p1 = 0, p2 = 0;
    int cnt = 0;
    while (!(p1 >= n || p2 >= m)) {
        //cout << "!" << b[p1] << " " << g[p2] << '\n';
        if (b[p1] - g[p2] > 1) {
            p2++;
        }
        else if (g[p2] - b[p1] > 1) {
            p1++;
        }
        else {
            p1++; p2++; cnt++;
        }
        // cout << cnt << endl;

    }

    cout << cnt << '\n';



    return 0;
}
