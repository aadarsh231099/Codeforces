//https://codeforces.com/problemset/problem/136/A
#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    int a[n],x[n];
    for (int i = 0; i < n; ++i)
    {
        cin>>a[i];
        x[a[i]]=i+1;
    }
    for (int i = 1; i < n+1; ++i)
    {
        cout<<x[i]<<endl;
    }
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