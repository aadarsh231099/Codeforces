//https://codeforces.com/problemset/problem/486/A
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve(){
  ll n,s=0;
  cin>>n;
  if(n%2==0)
    cout<<n/2;
  else
    cout<<-(n/2+1);
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