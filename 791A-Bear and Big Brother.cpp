//https://codeforces.com/problemset/problem/791/A
#include <bits/stdc++.h>
using namespace std;
void solve(){
     int a,b,c=0;
     cin>>a>>b;
     while(a<=b)
          {    a=a*3;
               b=b*2;
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