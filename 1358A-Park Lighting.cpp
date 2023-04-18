//https://codeforces.com/problemset/problem/1358/A
//Park Lighting

#include <bits/stdc++.h>
using namespace std;

void solve(){
  int n,m;
  double  A,B;
  cin>>n>>m;
  A=n,B=m;
  long long  ans=0;
  ans=ceil((A*B)/2);
  cout<<ans<<endl;
}
int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  long long t;
  cin>>t;
  while(t--)
    solve();
  return 0;
}

