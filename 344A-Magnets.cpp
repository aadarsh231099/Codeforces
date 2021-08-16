//https://codeforces.com/problemset/problem/344/A
#include <bits/stdc++.h>
using namespace std;
void solve(){
  int n,c=0;
  cin>>n;
  int a[n];
  for(int i=0;i<n;i++)
  {
    cin>>a[i];
  }
  for(int i=0;i<n;i++)
  {
    if(a[i]!=a[i+1])
      c++;
  }
  cout<<c<<endl;
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