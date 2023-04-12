//https://codeforces.com/problemset/problem/492/A
//Vanya and Cubes

#include <bits/stdc++.h>
using namespace std;

void solve(){
  long n,a=0; 
  cin>>n;
  while(a*(a+1)*(a+2)<=6*n)
    ++a;
  --a;
  cout<<a<<endl;
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

