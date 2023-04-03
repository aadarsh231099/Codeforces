//https://codeforces.com/problemset/problem/1551/A
//Polycarp and Coins

#include <bits/stdc++.h>
using namespace std;

void solve(){
  long n;
  cin>>n;
  long d=n/3;
  cout<<d+(n%3==1)<<" "<<d+(n%3==2)<<endl;
}
int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  long t;
  cin>>t;
  while(t--)
    solve();
  return 0;
}

