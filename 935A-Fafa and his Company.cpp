//https://codeforces.com/problemset/problem/935/A
//Fafa and his Company

#include <bits/stdc++.h>
using namespace std;

void solve(){
  long n,cnt=1;
  cin>>n;
  for(long i= 2;i*i<=n;i++){
        if(n%i) continue;
        cnt+=2-(i*i==n);
    }
  cout<<cnt<<endl;

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

