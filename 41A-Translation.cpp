//https://codeforces.com/problemset/problem/41/A
#include <bits/stdc++.h>

using namespace std;
void solve(){
     string s,t,u;
     cin>>s;
     cin>>t;
     reverse(s.begin(),s.end());
     if(s==t)
          cout<<"YES";
     else
          cout<<"NO";
     }
int main(){
     ios::sync_with_stdio(0);
     cin.tie(0);
     int t=1;
     //cin>>t;
     while(t--)
     solve();
     return 0;}