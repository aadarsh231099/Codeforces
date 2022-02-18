//https://codeforces.com/problemset/problem/1154/A
#include <bits/stdc++.h>
using namespace std;
void solve()
{
long long int w,x,y,z,mx,a,b,c;
cin>>w>>x>>y>>z;
mx=max(max(max(w,x),y),z);
if(mx==x)
  {
    a=mx-z;
    b=mx-y;
    c=mx-w;
    cout<<a<<" "<<b<<" "<<c;
  } 
else if(mx==w)
  {
    a=mx-z;
    b=mx-y;
    c=mx-x;
    cout<<a<<" "<<b<<" "<<c;
  } 
else if(mx==y)
  {
    a=mx-z;
    b=mx-w;
    c=mx-x;
    cout<<a<<" "<<b<<" "<<c;
  }
  else
  {
    a=mx-y;
    b=mx-w;
    c=mx-x;
    cout<<a<<" "<<b<<" "<<c;
  }
  
}
int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  int t=1;
  //cin>>t;<<
  while(t--)
    solve();
  return 0;
}
