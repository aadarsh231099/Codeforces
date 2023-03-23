//https://codeforces.com/problemset/problem/1374/A
//Required Remainder
#include <bits/stdc++.h>
using namespace std;
void solve(){
    int x,y,n;
    cin>>x>>y>>n;
    int k=x*(n/x)+y;
        if (k>n) {
            k-=x;
        }
        cout<<k<<endl;
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
