//https://codeforces.com/problemset/problem/617/A
#include <bits/stdc++.h>
using namespace std;

void solve(){
  int n;
  cin>>n;
  if(n%5==0)
    cout<<n/5;
  else
  cout<<1+(n/5);
}
int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0); cout.tie(0);
  int t=1;
  //cin>>t;
  while(t--)
  {
    solve();
  }
  return 0;
}