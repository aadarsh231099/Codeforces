//https://codeforces.com/problemset/problem/148/A
#include <bits/stdc++.h>
using namespace std;
void solve(){
    int k,l,m,n,d;
    cin>>k>>l>>m>>n>>d;
    int c=0;
    if((k==1)||(l==1)||(m==1)||(n==1))
        {cout<<d;return;}
    for(int i=1;i<=d;i++)
    {
        if((i%k!=0) && (i%l!=0) && (i%m!=0) && (i%n!=0))
            c++;
    }
    cout<<d-c;
}
int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0); cout.tie(0);
  int t=1;
  //cin>>t;
  while(t--)
  {
    solve();
  }
  return 0;
}