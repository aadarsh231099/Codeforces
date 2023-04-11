//https://codeforces.com/problemset/problem/1535/A
//Fair Playoff

#include <bits/stdc++.h>
using namespace std;

void solve(){
  vector<pair<long, long> > a(4);
  for(long p = 0; p < 4; p++)
    {
      cin>>a[p].first;
      a[p].second=p;
    }
  sort(a.rbegin(),a.rend());
  long x=a[0].second;
  long y=a[1].second;
  x/=2;
  y/= 2;
  cout<<(x==y?"NO":"YES")<<endl;
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

