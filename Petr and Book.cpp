//https://codeforces.com/problemset/problem/139/A
#include <bits/stdc++.h>
using namespace std;
void solve(){
  int n,i,s=0,a[7];
  cin>>n;
  label: 
  for( i=0;i<7;i++)
  {
    cin>>a[i];
    s=s+a[i];
    if(s>=n)
      break;
  }
  if(s<n)
    goto label;
  else
  cout<<i+1;
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