//https://codeforces.com/problemset/problem/1/A
#include <bits/stdc++.h>
using namespace std;
#define ll unsigned long long int
void solve()
{
  ll n,m,a,res;
  cin>>n>>m>>a;
  res=ceil((double)m/a)*ceil((double)n/a);
  cout<<res;
  }
int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  ll t=1;
  //cin>>t;
  while(t--)
    solve();
  return 0;
}
