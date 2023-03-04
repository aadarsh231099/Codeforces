//https://codeforces.com/problemset/problem/1234/A
//Equalize Prices Again
#include <bits/stdc++.h>
using namespace std;
void solve(){
       int n;
        cin >> n;
        int a[n];
        for(int i = 0; i < n; i++) {
            cin >> a[i];
        }
        int sum = accumulate(a, a + n, 0);
        int minPrice = *min_element(a, a + n);
        int newPrice = (sum + n - 1) / n;
        if(newPrice < minPrice) {
            newPrice = minPrice;
        }
        cout << newPrice << endl;
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