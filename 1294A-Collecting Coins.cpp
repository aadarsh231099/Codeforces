//https://codeforces.com/contest/1294/problem/A
#include <bits/stdc++.h>
using namespace std;
void solve()
{
  long long int a,b,c,n;
  cin>>a>>b>>c>>n;
  long long int m=max(a,max(b,c));
  long long int s1=m-a;
  long long int s2=m-b;
  long long int s3=m-c;
  if(n-(s1+s2+s3)<0)
    cout<<"NO"<<endl;
  else if((n-(s1+s2+s3))%3==0)
    cout<<"YES"<<endl;
  else
    cout<<"NO"<<endl;
}

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  int t;
  cin>>t;
  while(t--)
    solve();
  return 0;
}
