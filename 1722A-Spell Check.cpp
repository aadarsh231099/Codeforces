//https://codeforces.com/contest/1722/problem/A
#include <bits/stdc++.h>
using namespace std;
void solve()
{
  int n;
  cin>>n;
  string s;
  cin>>s;
  string s1="Timur";
  sort(s1.begin(),s1.end());
  sort(s.begin(),s.end());
  if(s==s1)
    cout<<"YES"<<endl;
  else
    cout<<"NO"<<endl;
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