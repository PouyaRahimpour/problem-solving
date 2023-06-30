#include<bits/stdc++.h>
#define ll long long
#define pii pair<int, int>
using namespace std;
const int maxn =2e5+20;
int a[maxn];
int b[maxn];
int freq1[2*maxn], freq2[2*maxn];

int main() {
    int tt; cin >> tt;
    while (tt--) {
        int n; cin >> n;
        memset(freq1, 0, (2*n)*sizeof(int));
        memset(freq2, 0, (2*n)*sizeof(int));

        int t;
        for (int i=0; i<n; i++) {cin >> t; t--; a[i] = t;}
        for (int i=0; i<n; i++) {cin >> t; t--; b[i] = t;}

        int len;
        for (int i=0; i<n; i++) {
            len = 1;
            while (i!=n-1 && b[i]==b[i+1]) {
                len++;
                i++;
            }
            freq2[b[i]] = max(freq2[b[i]], len);
        }
        /*
        */
        for (int i=0; i<n; i++) {
            len = 1;
            while (i!=n-1 && a[i]==a[i+1]) {
                len++;
                i++;
            }
            freq1[a[i]] = max(freq1[a[i]], len);
        }
        int maxfreq = -1;
        for (int i=0; i<2*n; i++) maxfreq = max(maxfreq, freq1[i]+freq2[i]);


        cout << maxfreq << "\n";
    }





    return 0;
}

