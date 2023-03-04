//https://codeforces.com/problemset/problem/1409/A
#include <bits/stdc++.h>
using namespace std;
void solve(){
           int a, b;
        cin >> a >> b;

        int diff = abs(a - b);
        int moves = diff / 10;
        int rem = diff % 10;

        if (rem != 0) {
            moves += 1;
        }

        cout << moves << endl;
}
int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  int t;
  cin>>t;
  while(t--)
    solve();
  return 0;
}