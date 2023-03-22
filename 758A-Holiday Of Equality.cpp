//https://codeforces.com/problemset/problem/758/A
//Holiday Of Equality
#include <bits/stdc++.h>
using namespace std;
void solve(){
	int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int max_welfare = *max_element(a.begin(), a.end());
    int total_spending = 0;
    for (int i = 0; i < n; i++) {
        total_spending += max_welfare - a[i];
    }

    cout << total_spending << endl;
  
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