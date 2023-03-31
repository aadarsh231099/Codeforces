//https://codeforces.com/problemset/problem/1742/A
//Sum
#include <bits/stdc++.h>
using namespace std;

void solve(){
    int a,b,c;
    cin>>a>>b>>c;
    if((a+b==c) || (a+c==b) || (b+c==a))cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
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

