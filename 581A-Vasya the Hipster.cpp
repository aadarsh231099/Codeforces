//https://codeforces.com/problemset/problem/581/A
#include <bits/stdc++.h>
using namespace std;
void solve(){
    int a,b;
    cin>>a>>b;
    int n=0,m=0;
    if(a==1 || b==1)
        n=1;
    if(a==b)
        n=a;
    if(a>b)
        {n=b;
        m=(a-b)/2;}
    if(a<b)
    {
        n=a;
        m=(b-a)/2;
    }
    cout<<n<<" "<<m;
    }
int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0); cout.tie(0);
  int t=1;
  //cin>>t;
  while(t--)
  {
    solve();
  }
  return 0;
}
