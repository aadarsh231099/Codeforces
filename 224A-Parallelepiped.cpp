//https://codeforces.com/problemset/problem/224/A
#include <bits/stdc++.h>
using namespace std;
void solve(){
  int xy,yz,zx;
  cin>>xy>>yz>>zx;
  cout<<4*(sqrt((xy*zx)/yz)+sqrt((xy*yz)/zx)+sqrt((yz*zx)/xy));
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