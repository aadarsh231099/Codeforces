//https://codeforces.com/problemset/problem/1092/B
//Teams Forming
#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a, a+n);
    int problems = 0;
    for (int i = 0; i < n; i += 2) {
        problems += abs(a[i] - a[i+1]);
    }
    cout << problems << endl;
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