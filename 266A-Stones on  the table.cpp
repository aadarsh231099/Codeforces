//https://codeforces.com/problemset/problem/266/A
#include <bits/stdc++.h>
using namespace std;
void solve(){
     int n,c=0;
     cin>>n;
     string s;
     cin>>s;
     for(int i=0;i<n;i++)
     {
          if(s[i]==s[i+1])
               c++;
     }
     cout<<c;
}
int main(){
     ios::sync_with_stdio(0);
     cin.tie(0);
     int t=1;
     //cin>>t;
     while(t--)
     solve();
     return 0;}