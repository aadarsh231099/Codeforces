//https://codeforces.com/problemset/problem/1353/A
//Most Unstable Array

#include <bits/stdc++.h>
using namespace std;

void solve(){
  long long int m,n;
  cin>>n>>m;
  if(n==1){
    cout<<0<<endl;
  }
  if(n==2){
    cout<<m<<endl;
  }
  if(n>2){
    cout<<m*2<<endl;
  }
}
int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  long long t;
  cin>>t;
  while(t--)
    solve();
  return 0;
}

