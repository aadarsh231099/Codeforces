//https://codeforces.com/problemset/problem/977/A
#include <bits/stdc++.h>
using namespace std;
void solve(){
     long long int n,k;
     cin>>n>>k;
     for(int i=0;i<k;i++)
     {
          if((n%10)!=0)
               n=n-1;
          else
               n=n/10;
     } cout<<n;
}
int main(){
     ios::sync_with_stdio(0);
     cin.tie(0);
     int t=1;
     //cin>>t;
     while(t--)
     solve();
     return 0;}