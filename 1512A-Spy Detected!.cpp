//https://codeforces.com/problemset/problem/1512/A
#include <bits/stdc++.h>
using namespace std;
void solve()
{
int n,b,f=1;
cin>>n;
int a[n]; 
for(int i=0;i<n;i++)
cin>>a[i];
for(int i=1;i<n-1;i++)
{
  if(a[i]!=a[i+1] && a[i]!=a[i-1])
  {
    cout<<i+1<<endl;
    f=0;
  }
}
if(f==1)
{
  if(a[0]!=a[1])
    cout<<1<<endl;
  else
    cout<<n<<endl;
}
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
