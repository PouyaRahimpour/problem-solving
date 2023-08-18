#include<bits/stdc++.h>
using namespace std;

int tc;
void solve(int t) {
    map<int, int> mp;
    for (int i=0; i<t; i++) {
        int x; cin >> x;
        for (int j=0; j<x; j++) {
            int tmp; cin >> tmp;
            mp[tmp] = i;
        }
    }
    /*
    for (int i=0; i<t; i++) {
        for (int j: v[i]) {
            cout << j << " ";
        } cout << endl;
    }
    */

    queue<queue<int>> ds;
    cout << "Scenario #" << tc << endl;
    string cmd; cin >> cmd;
    while (cmd!="STOP") {
        if (cmd=="ENQUEUE") {
            int id; cin >> id;
        } else if (cmd=="DEQUEUE") {
        }
        cin >> cmd;
    }
    cout << endl;


}
int main() {
    int t; cin >> t;
    tc = 0;
    while (t) {
        tc++;
        solve(t);
        cin >> t;
    }
    return 0;
}
