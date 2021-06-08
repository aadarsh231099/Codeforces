//https://codeforces.com/problemset/problem/1325/B
#include <bits/stdc++.h>
using namespace std;
void solve(){
  int n;
  cin>>n;
  int c=n;
  int a[n];
  for (int i = 0; i < n; ++i)
  {
    cin>>a[i];
  }
  sort(a,a+n);
  for (int i = 0; i < n; ++i)
  {
    if(a[i]==a[i+1])
      c--;
  }
  if(c==0)
    cout<<'1'<<"\n";
  else
    cout<<c<<"\n";
}
int main(){
     ios::sync_with_stdio(0);
     cin.tie(0);
     int t;
     cin>>t;
     while(t--){
     solve();
   }
     return 0;
   }

