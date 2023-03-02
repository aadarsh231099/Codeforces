//https://codeforces.com/problemset/problem/996/A
//Hit the Lottery
#include <bits/stdc++.h>
using namespace std;
void solve(){
	int n;
    cin>>n;
    int ans=n/100+(n%100)/20+((n%100)%20)/10+(((n%100)%20)%10)/5+(((n%100)%20)%10)%5;
    cout<<ans<<endl;
  
}
int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  int t=1;
  //cin>>t;
  while(t--)
    solve();
  return 0;
}