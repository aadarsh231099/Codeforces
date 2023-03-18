//https://codeforces.com/problemset/problem/432/A
//Choosing Teams
#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n, k;
    cin >> n >> k;

    vector<int> y(n);
    for (int i = 0; i < n; i++) {
        cin >> y[i];
    }

    int cnt = 0;
    for (int i = 0; i < n; i++) {
        if (y[i] + k <= 5) {
            cnt++;
        }
    }

    vector<int> eligible(cnt);
    int j = 0;
    for (int i = 0; i < n; i++) {
        if (y[i] + k <= 5) {
            eligible[j++] = i;
        }
    }

    sort(eligible.begin(), eligible.end(), [&](int i, int j) { return y[i] > y[j]; });

    int teams = 0;
    for (int i = 0; i < cnt; i += 3) {
        if (i + 2 < cnt) {
            teams++;
        }
    }

    cout << teams << endl;
}
int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  int t=1;
  //cin>>t;
  while(t--)
    solve();
  return 0;
}