#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
int a[10], b[10];
int32_t main() {
    int m, s;
    cin >> m >> s;
    // 4 35
    // 9970  35/9=3
    // 1699 
    if (m==1) {
        if (s==0) {
            cout << "0 0\n";
        } else if (s>9) {
            cout << "-1 -1\n";
        } else {
            cout << s << " " << s <<'\n';
        }
        return 0;
    }

    if (s==0) {
        cout << "-1 -1\n";
        return 0;
    }

    bool possible = true;

    for (int i = 9; i>0; i--) {
        int t = min(m, s/i);
        b[i] = a[i] = t;
        m -= t;
        s -= i*t;
    } 

    // little one
    int tmp = m;
    if (s > 0) {
        possible = false;
    } else if (tmp > 0) {
        int ind = 0;
        while (a[++ind]==0);
        if (ind > 9) possible = false;
        else {
            a[ind--]--;
            a[ind]++;
            if (ind == 0) tmp++;
        }
    }

    // print
    if (possible) {
        if (tmp > 0) {cout << 1;tmp--;}
        for (int i=0; i<tmp; i++) cout << 0;
        for(int i=1; i<10; i++) {
            for (int j=0; j<a[i]; j++) cout << i;
        }
        tmp = m;
        cout << " ";

        for(int i=9; i>0; i--) {
            for (int j=0; j<b[i]; j++) cout << i;
        }
        for (int i=0; i<tmp; i++) cout << 0;
        cout << '\n';

    } else {
        cout << -1 << " " << -1 <<'\n';
    }

    



    
    return 0;
}
