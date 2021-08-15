//https://codeforces.com/problemset/problem/703/A
#include <bits/stdc++.h>
using namespace std;
int a,b,c=0,c1=0;
void solve(){
 cin>>a>>b;
  if(a>b)
    c++;
  else if(a<b)
    c1++;
}
int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0); cout.tie(0);
  int t;
  cin>>t;
  while(t--)
  {
     solve();
  }
  if(c>c1)
    cout<<"Mishka";
  else if(c1>c)
    cout<<"Chris";
  else
    cout<<"Friendship is magic!^^";
  return 0;
}
