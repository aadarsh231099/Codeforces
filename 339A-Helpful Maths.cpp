//https://codeforces.com/problemset/problem/339/A
#include <bits/stdc++.h>
using namespace std;
void solve(){
  string s;
  cin>>s;
  int a[s.length()/2-1];
  int j=0;
  for (int i = 0; i < s.length(); ++i)
  { 
    if(isalnum(s[i]))
      a[j++]=s[i]-'0';
  }
  sort(a,a+j);
  for (int i = 0; i < j; ++i)
  {
    if(i<j-1)
      cout<<a[i]<<'+';
    else
      cout<<a[i];
  }
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