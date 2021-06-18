//https://codeforces.com/problemset/problem/228/A
#include <bits/stdc++.h>
using namespace std;
void solve(){
  long long a,b,c,d,count=0;
  cin>>a>>b>>c>>d;
  if(a==b || a==c || a==d)
    count++;
  if(b==c || b==d)
    count++;
  if(c==d)
    count++;
  cout<<count;
}
int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0); cout.tie(0);
  int t=1;
  //cin>>t;
  while(t--)
  {
    solve();
  }
  return 0;
}

