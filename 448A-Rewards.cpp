//https://codeforces.com/problemset/problem/448/A
//Rewards
#include <bits/stdc++.h>
using namespace std;

void solve(){
        int a1, a2, a3, b1, b2, b3, n;
    cin >> a1 >> a2 >> a3 >> b1 >> b2 >> b3 >> n;
 
    int totalCups = a1 + a2 + a3;
    int totalMedals = b1 + b2 + b3;
    int remainingShelves = n - ((totalCups + 4) / 5 + (totalMedals + 9) / 10);
 
    if (remainingShelves >= 0) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
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