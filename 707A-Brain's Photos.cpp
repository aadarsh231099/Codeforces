//https://codeforces.com/problemset/problem/707/A
//Brain's Photos

#include <bits/stdc++.h>
using namespace std;

void solve(){
  long n,m; 
  cin>>n>>m;
  bool color=false;
  for(int i=0;i<n;i++){
    if(color)break;
      for(int j=0;j<m;j++){
        char x;
        cin>>x;
        if(x=='C'||x=='M'||x=='Y')
          {
            color=true;
            break;
          }
        }
    }
    cout<<(color?"#Color":"#Black&White")<<std::endl;
}
int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  long long t=1;
  //cin>>t;
  while(t--)
    solve();
  return 0;
}

