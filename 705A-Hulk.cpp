//https://codeforces.com/problemset/problem/705/A
#include <bits/stdc++.h>
using namespace std;
void solve(){
  int n;
  cin>>n;
  string s1="I hate";
  string s2="I love";
  for (int i = 0; i < n; ++i)
  {
    if (i%2==0)
      cout << "I hate ";
    else
      cout << "I love ";
    if(i==(n-1))
      cout<<"it ";
    else
      cout<<"that ";
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