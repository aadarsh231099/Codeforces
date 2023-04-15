//https://codeforces.com/problemset/problem/1348/A
//Phoenix and Balance

#include <bits/stdc++.h>
using namespace std;

void solve(){
  int n,a[10000];
  long long int ans=0,sum1=0,sum2=0;
        int div=0;
        cin>>n;
        int k=0;
        for(int i=1;i<=n;i++){
            a[k++]=pow(2,i);
        }
        div=n/2;
        sum1=a[n-1];
        for(int i=0;i<=div-2;i++){
            sum1+=a[i];
        }
        for(int i=div-1;i<n-1;i++){
            sum2+=a[i];
        }
        ans=abs(sum1-sum2);
        cout<<ans<<endl;
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

