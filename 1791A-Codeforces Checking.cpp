//https://codeforces.com/problemset/problem/1791/A
//Codeforces Checking

#include <bits/stdc++.h>
using namespace std;

void solve(){
  string c;
  cin>>c;
  if(c=="c" || c=="o" || c=="d" || c=="e" || c=="f" || c=="r" || c=="s") cout<<"YES"<<endl;
  else cout<<"NO"<<endl;
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

