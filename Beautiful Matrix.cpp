//https://codeforces.com/problemset/problem/263/A
#include <bits/stdc++.h>
using namespace std;
void solve(){
  int a[5][5],x=0,y=0;
  for(int i=0;i<5;i++)
  {
    for(int j=0;j<5;j++)
      cin>>a[i][j];
  }
  for(int i=0;i<5;i++)
  {
    for(int j=0;j<5;j++)
      if(a[i][j]==1)
      {
        x=abs(i-2);
        y=abs(j-2);
        break;
      }
  }
  cout<<x+y;
  }
int main(){
     ios::sync_with_stdio(0);
     cin.tie(0);
     int t=1;
     //cin>>t;
     while(t--){
     solve();
   }
     return 0;
   }