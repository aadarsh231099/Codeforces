//https://codeforces.com/problemset/problem/141/A
#include <bits/stdc++.h>
using namespace std;
void solve(){
     string a,b,c,d;
     cin>>a;
     cin>>b;
     cin>>c;
     d=a+b;
     sort(d.begin(),d.end());
     sort(c.begin(),c.end());
     if(c==d)
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
     return 0;
}