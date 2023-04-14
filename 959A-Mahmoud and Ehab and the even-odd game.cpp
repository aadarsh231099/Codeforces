//https://codeforces.com/problemset/problem/959/A
//Mahmoud and Ehab and the even-odd game

#include <bits/stdc++.h>
using namespace std;

void solve(){
  long n;
  cin>>n;
  cout<<(n%2?"Ehab":"Mahmoud");
}
int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  long long t=1;
  //cin>>t;
  while(t--)
    solve();
  return 0;
}
