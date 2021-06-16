//https://codeforces.com/contest/260/problem/A
#include <bits/stdc++.h>
using namespace std;
void solve(){
    int a,b,n;
    cin>>a>>b>>n;
    int flag=0;
        for(int k=0;k<=9;k++)
       { if((a*10+k)%b==0)
           {a=a*10+k;flag=1;break;}
        }
        if(flag==1)
        {cout<<a;
        for(int i=0;i<n-1;i++)
            cout<<0;}
        if(flag==0)
        {cout<<"-1";return;}
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

