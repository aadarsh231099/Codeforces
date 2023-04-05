//https://codeforces.com/problemset/problem/1371/A
//Magical Sticks

#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n,ans=0;
    cin>>n;
    ans=n/2;
    if(n%2==1)ans++;
    cout<<ans<<endl;
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

