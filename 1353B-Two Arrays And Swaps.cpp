//https://codeforces.com/problemset/problem/1353/B
//Two Arrays And Swaps
#include <bits/stdc++.h>
using namespace std;

void solve(){
        int n,k;
        cin>>n>>k;
        int a[101],b[101];
        for(int i=0; i<n; i++){
            cin>>a[i];
        }
        for(int i=0; i<n; i++){
            cin>>b[i];
        }
        sort(a,a+n);
        sort(b,b+n,greater<int>());
        for(int i=0; i<k; i++){
            for(int j=0; j<n; j++){
                if(b[j] > a[j]){
                    swap(a[j],b[j]);
                    break;
                }
            }
        }
        int sum=0;
        for(int i=0; i<n; i++){
            sum+=a[i];
        }
        cout<<sum<<endl;
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

