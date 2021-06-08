//https://codeforces.com/problemset/problem/248/A
#include <bits/stdc++.h>
using namespace std;
void solve(){
  int n,sa=0,sb=0;
  cin>>n;
  int a[n],b[n];
  for(int i=0;i<n;i++)
  { 
    cin>>a[i]>>b[i];
    sa=sa+a[i];
    sb=sb+b[i];
  }
  cout<<(min(sa,n-sa)+min(sb,n-sb));
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



//ANOTHER APPROACH:-


/*#include <bits/stdc++.h>
using namespace std;
void solve(){
  int n,c2=0,c1=0,c=0,cc=0,d=0,b=0;
  cin>>n;
  int a[n][2];
  for(int i=0;i<n;i++)
  {
    for(int j=0;j<2;j++)
      cin>>a[i][j];
  }
  for(int i=0;i<n;i++)
  {
    if(a[i][0]==0)
      c2++;
    else
      c1++;
    if(a[i][1]==0)
      c++;
    else
      cc++;
  }
  if(c2>c1)
    d=n-c2;
  else
    d=n-c1;
  if(c>cc)
    b=n-c;
  else
    b=n-cc;
  cout<<d+b;
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
   */