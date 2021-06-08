//https://codeforces.com/problemset/status?my=on
#include <bits/stdc++.h>
using namespace std;
void solve(){
     int k,n,w,sum=0;
     cin>>k>>n>>w;
     for (int i = 1; i <=w; ++i)
     {
          sum=sum+(i*k);
     }
     if(sum>=n)
          cout<<(sum-n);
     else
          cout<<"0";
}
int main(){
     ios::sync_with_stdio(0);
     cin.tie(0);
     int t=1;
     //cin>>t;
     while(t--)
     solve();
     return 0;}