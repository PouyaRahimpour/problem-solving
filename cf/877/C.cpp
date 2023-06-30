#include<bits/stdc++.h>
#define ll long long
#define pii pair<int, int>
using namespace std;
const int maxn = 1e3+20;
int grid[maxn][maxn];

int main() {
    int tt; cin >> tt;
    while (tt--) {
        int n, m; cin >> n >> m;
        if (!prime(m)) {
            for (int i=0; i<n; i++)
                for (int j=0 j<m; j++)
                    grid[i][j] = i+j+1;
        }
        else if (!prime(n)) {
            for (int j=0 j<m; j++)
                for (int i=0; i<n; i++)
                    grid[i][j] = i+j+1;
        }
        else {


        }

        for (int i=0; i<n; i++)
            for (int j=0; j<m; j++)
                cout << grid[i][j] << " \n"[j==m-1];

    }

    return 0;
}

