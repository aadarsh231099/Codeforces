//https://codeforces.com/problemset/problem/1030/A
#include <bits/stdc++.h>
using namespace std;
void solve(){
  int n;
  cin>>n;
  int s[n];
  int flag=0;
  for (int i = 0; i < n; ++i)
  {
    cin>>s[i];
    if(s[i]==1)
      {flag=1;break;}
  }if(flag==0)
  cout<<"EASY";
  else
    cout<<"HARD";
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