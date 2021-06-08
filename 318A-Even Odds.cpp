//https://codeforces.com/contest/318/problem/A
#include <bits/stdc++.h>
using namespace std;
void solve(){
  long long int n,k;
  cin>>n>>k;
  if(n%2==0)
    { if(k<=(n/2))
      cout<<2*k-1;
      else
        cout<<2*(k-(n/2));
    }
    else
    {
      if(k<=(n/2)+1)
        cout<<2*k-1;
      else
        cout<<2*(k-((n/2)+1));
    }
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