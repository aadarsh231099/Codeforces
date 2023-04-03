//https://codeforces.com/problemset/problem/1360/A
//Minimal Square

#include <bits/stdc++.h>
using namespace std;

void solve(){
    int a,b;
     cin>>a>>b;
    if(a > b){
        swap(a,b);
    }
    cout<<max(a*2,b)*max(a*2,b)<<endl;
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

