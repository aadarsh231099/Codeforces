//https://codeforces.com/problemset/problem/116/A
#include <bits/stdc++.h>
using namespace std;
void solve(){
  int n;
  cin>>n;
  int a[n],b[n],sum=0,max=0;
  for(int i=0;i<n;i++)
  {
    cin>>a[i]>>b[i];
    sum=sum+b[i]-a[i];
    if(sum>max)
      max=sum;
  }
  cout<<max;
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