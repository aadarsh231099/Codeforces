//https://codeforces.com/contest/1669/problem/A
//Division?

#include <bits/stdc++.h>
using namespace std;

void solve(){
        long r; 
        cin>>r;
        int res=1;
        if(r<=1399)
          {
            res=4;
          }
        else if(r<=1599)
          {
            res=3;
          }
        else if(r<=1899)
          {
            res=2;
          }
        else if(1900<=r)
          {
            res=1;
          }
        cout<<"Division "<<res<<endl;
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

