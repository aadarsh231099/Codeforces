//https://codeforces.com/problemset/problem/749/A
//Bachgold Problem

#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n,div=0;
    cin>>n;
    if(n%2==1){
        div=(n/2);
        cout<<div<<endl<<3<<" ";
        for(int i=0;i<div-1;i++)
            cout<<2<<" ";
        cout<<endl;
    }
    else{
        div=n/2;
        cout<<div<<endl;
        for(int i=0;i<div;i++)
            cout<<2<<" ";
        cout<<endl;
    }
}
int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  long t=1;
  //cin>>t;
  while(t--)
    solve();
  return 0;
}

