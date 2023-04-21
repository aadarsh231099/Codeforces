//https://codeforces.com/problemset/problem/1296/A
//Array with Odd Sum

#include <bits/stdc++.h>
using namespace std;

void solve(){
  int odd,even,n;
  int a[10000];
  odd=even=0;
  cin>>n;
    for(int i=0; i<n; i++)
    {
      cin>>a[i];
        if(a[i]%2==0)
            even++;
        else
            odd++;
        }
        if (odd & 1 or (odd > 0 and even > 0))
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
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

