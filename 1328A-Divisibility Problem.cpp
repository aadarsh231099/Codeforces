#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve(){
  ll a,b;
  cin>>a>>b;
  if(a%b==0)
  {
    cout<<'0'<<endl;return;
  }
  else{ ll d=a/b; cout<<((b*(d+1))-a)<<endl;
  }
}
int main(){
     ios::sync_with_stdio(0);
     cin.tie(0);
     int t;
     cin>>t;
     while(t--){
     solve();
   }
     return 0;
   }