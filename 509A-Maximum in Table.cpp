//https://codeforces.com/problemset/problem/509/A
//Maximum in Table

#include <bits/stdc++.h>
using namespace std;

void solve(){
  int n;
  cin>>n;
  vector<long long> a(n,1);
  for(int i=1;i<n;i++)
  {
    for(int q=1;q<n;q++) 
      a[q]+=a[q-1];
  }
  cout<<a[n-1]<<endl;
}
int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  long long t=1;
  //cin>>t;
  while(t--)
    solve();
  return 0;
}

