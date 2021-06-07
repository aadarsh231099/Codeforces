//https://codeforces.com/problemset/problem/467/A
#include <bits/stdc++.h>
using namespace std;
void solve(){
  int n;
  cin>>n;
  int a[n],b[n],c=0;
  for (int i = 0; i < n; ++i)
  {
    cin>>a[i]>>b[i];
    if(abs(a[i]-b[i])>=2)
      c++;
}
cout<<c;
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