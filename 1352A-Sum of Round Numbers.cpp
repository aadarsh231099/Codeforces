//https://codeforces.com/problemset/problem/1352/A
//Sum of Round Numbers
#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        string n;
        cin >> n;
        vector<int> ans;
        for (int i = n.size()-1; i >= 0; i--) {
            if (n[i] != '0') {
                int d = n[i] - '0';
                ans.push_back(d * pow(10, n.size()-i-1));
            }
        }
        cout << ans.size() << endl;
        for (int x : ans) {
            cout << x << " ";
        }
        cout << endl;
    }
    return 0;
}








