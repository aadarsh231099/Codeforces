//https://codeforces.com/problemset/problem/1367/A
//Short Substrings
#include <bits/stdc++.h>
using namespace std;
void solve(){
    string b, a;
        cin >> b;
        for (int i = 0; i < b.length() - 1; i += 2) {
            a += b[i];
        }
        a += b[b.length() - 1];
        cout << a << endl;
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