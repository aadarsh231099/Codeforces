//https://codeforces.com/problemset/problem/1389/A
//LCM Problem

#include <bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;

void solve(){
        ll l,r,x=0,y=0;
        cin>>l>>r;
        if(l*2<=r){
            x=l;
            y=l*2;
        }
        else{
            x=-1;
            y=-1;
        }
        cout<<x<<" "<<y<<endl;
}
int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  long long t;
  cin>>t;
  while(t--)
    solve();
  return 0;
}

