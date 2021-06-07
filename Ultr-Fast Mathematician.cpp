//https://codeforces.com/problemset/problem/61/A
#include <bits/stdc++.h>
using namespace std;
void solve(){
     string a,b;
     cin>>a;
     cin>>b;
     for(int i=0;i<a.length();i++){
          if((a[i]=='1' && b[i]=='1') || (a[i]=='0' && b[i]=='0'))
               cout<<"0";
          else
               cout<<"1";
}
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