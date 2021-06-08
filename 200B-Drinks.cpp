//https://codeforces.com/problemset/problem/200/B
#include <bits/stdc++.h>
using namespace std;
void solve(){
     int n;
     float sum=0;
     cin>>n;
     float a[n];
     for(int i=0;i<n;i++)
     {
          cin>>a[i];
     }
     for(int i=0;i<n;i++)
     {
          sum=sum+float(a[i]/100);
     }
     cout<<((sum/n)*100);

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