//https://codeforces.com/problemset/problem/427/A
#include <bits/stdc++.h>
using namespace std;
void solve()
{
int n;
cin>>n;
int a[n],s=0,c=0,f=0;
for(int i=0;i<n;i++)
  {cin>>a[i];
  if(a[i]>0)
    c=c+a[i];
  else
  {
    if(c<1)
      f++;
    else
      c--;
  }
}
cout<<f;
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
