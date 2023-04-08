//https://codeforces.com/problemset/problem/1426/A
//Floor Number

#include <bits/stdc++.h>
using namespace std;

void solve(){
  int n,x;
  cin>>n>>x;
  int c = 2,ans = 1;
  while(c < n){
    c += x;
    ans++;
  }
  cout<<ans<<endl;
}
int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  long t;
  cin>>t;
  while(t--)
    solve();
  return 0;
}

