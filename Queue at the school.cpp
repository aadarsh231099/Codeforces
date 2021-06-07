//https://codeforces.com/problemset/problem/266/B
#include <bits/stdc++.h>
using namespace std;
void solve(){
  int n,t;
  cin>>n>>t;
  string s;
  cin>>s;
  for (int j = 0; j < t; ++j)
  {
    
  for(int i=0;i<s.length();i++)
  {
    if(s[i]=='B'&&s[i+1]=='G')
      {s[i]='G';s[i+1]='B';i++;}
  }}
  cout<<s;
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