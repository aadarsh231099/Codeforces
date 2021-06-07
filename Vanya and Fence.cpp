//https://codeforces.com/problemset/problem/677/A
#include <bits/stdc++.h>
using namespace std;
void solve(){
  int n,h,sum=0;
  cin>>n>>h;
  int a[n];
  for (int i = 0; i < n; ++i)
  {
    cin>>a[i];
    if(a[i]>h)
      sum+=2;
    else 
      sum++;
  }
  cout<<sum;
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