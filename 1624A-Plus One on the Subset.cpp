//https://codeforces.com/problemset/problem/1624/A
//Plus One on the Subset
#include <bits/stdc++.h>
using namespace std;

void solve(){
    long n; 
    cin>>n;
    long mx(0), mn(1e9 + 7);
    for(long p = 0; p < n; p++){
      long x;
      cin>>x;
      mn = (mn < x) ? mn : x;
      mx = (mx > x) ? mx : x;
    }
    cout<<mx-mn<<endl;
}
int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  int t;
  cin>>t;
  while(t--)
    solve();
  return 0;
}

