//https://codeforces.com/problemset/problem/80/A
#include <bits/stdc++.h>
using namespace std;
bool prime(int n)
{
     for(int i=2;i<n;i++)
          if(n%i==0)
               return false;
     return true;
}
void solve(){
     int n,m,p;
     cin>>n>>m;
     for(int i=n+1;i<=50;i++)
     {
          if(prime(i)==true)
          {
               p=i;
               break;
          }
     }
     if(p==m)
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