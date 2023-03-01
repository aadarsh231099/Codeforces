//https://codeforces.com/problemset/problem/1472/A
#include <bits/stdc++.h>
using namespace std;
void solve(){
   int w, h, n;
        cin >> w >> h >> n;
        
        int cnt = 1;
        while (w % 2 == 0 || h % 2 == 0) {
            if (w % 2 == 0) {
                w /= 2;
            } else {
                h /= 2;
            }
            cnt *= 2;
        }
        
        if (cnt >= n) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
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