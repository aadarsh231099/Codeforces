//https://codeforces.com/problemset/problem/34/A
#include <bits/stdc++.h>
using namespace std;
void solve(){
  int n;
  cin>>n;
  int a[n],i=0,m=0,x=0;
  for( i=0;i<n;i++)
  {
    cin>>a[i];
  }
  m=abs(a[0]-a[n-1]);
   for( i=1;i<n;i++)
   {
    if((abs(a[i-1]-a[i]))<m)
       {m=abs(a[i-1]-a[i]);
       x=i;}
   }
   if(m==(abs(a[0]-a[n-1])))
    cout<<n<<" "<<'1';
   else
    cout<<x<<" "<<x+1;
    
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