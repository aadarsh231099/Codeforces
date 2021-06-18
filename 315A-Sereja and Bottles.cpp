//https://codeforces.com/contest/315/problem/A
#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    int c=n;
    int a[n],b[n];
    for (int i = 0; i < n; ++i)
    {
        cin>>a[i]>>b[i];
    }
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            if((b[j]==a[i])&&(j!=i))
                {c--;break;}
        }
        }
        cout<<c;
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
