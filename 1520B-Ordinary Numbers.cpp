//https://codeforces.com/problemset/problem/1520/B
//Ordinary Numbers

#include <bits/stdc++.h>
using namespace std;

void solve(){
  long long n;
  cin>>n;
  long long c=0;
  for(long long i=1;i<=9;i++){
    long long cur=i;
    for(long long j=1;j<=10;j++)
    {
      if(cur<=n) c++;
      else
        break;
      cur=10*cur+i;
    }
  }
  cout<<c<<endl;
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

