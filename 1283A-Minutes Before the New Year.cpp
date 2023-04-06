//https://codeforces.com/problemset/problem/1283/A
//Minutes Before the New Year

#include <bits/stdc++.h>
using namespace std;

void solve(){
  int h,m,day,time=0;
  cin>>h>>m;
  day=24*60;
  time=h*60+m;
  cout<<day-time<<endl;
}
int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  long t;
  cin>>t;
  while(t--)
    solve();
  return 0;
}

