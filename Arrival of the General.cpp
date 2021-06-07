//https://codeforces.com/problemset/problem/144/A
#include <bits/stdc++.h>
using namespace std;
void solve(){
  int n;
  cin>>n;
  int a[n];
  int pos1=0,pos2=0;
  for (int i = 0; i < n; ++i)
  {
    cin>>a[i];
  }
  auto min=min_element(a,a+n);
  auto max=max_element(a,a+n);
   for (int i = 0; i < n; ++i)
  {
    if(a[i]==*min)
      {
       pos1=i;}
  }
   for (int i = 0; i < n; ++i)
  {
    if(a[i]==*max)
      {
       pos2=i;break;}
  }
  if (pos1<pos2)
  cout<<(n-pos1-1)+(pos2)-1;
  else
    cout<<(n-pos1-1)+(pos2);
}
int main(){
     ios::sync_with_stdio(0);
     cin.tie(0);
     int t=1;
     //cin>>t;
     while(t--){
     solve();
   }
     return 0;
   }