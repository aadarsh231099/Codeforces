//https://codeforces.com/problemset/problem/133/A
#include <bits/stdc++.h>
using namespace std;
void solve(){
  string p;
  cin>>p;
  int flag=0;
  for(int i=0;i<p.length();i++)
    if(p[i]=='H'||p[i]=='Q'||p[i]=='9')
      {flag=1;break;}
  if(flag==0)  
  cout<<"NO";
  else
    cout<<"YES";
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